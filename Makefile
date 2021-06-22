# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jludt <jludt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:51:20 by jludt             #+#    #+#              #
#    Updated: 2021/06/22 13:33:44 by jludt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror *.c
	ar -rv libft.a *.o

clean:
	rm -f *.o

fclean: clean	
	rm -f $(NAME)

re: fclean all