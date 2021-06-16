/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:40:04 by jludt             #+#    #+#             */
/*   Updated: 2021/06/16 16:38:09 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Testfunctions for Libft

//Necessary libraries to run tests
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Prototypes of functions which shell be tested
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isprint(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_atoi(const char *str);

int main(void)
{
    // //Testfunction for ft_strlen
    // printf("Testing strlen:\n");
    // const char *s_strlen = "Testing strlen!";
    // size_t i1_strlen = ft_strlen(s_strlen);
    // size_t i2_strlen = strlen(s_strlen);
    // printf("ft_strlen = %lu\n", i1_strlen);
    // printf("strlen = %lu\n", i2_strlen);
    // if (i1_strlen == i2_strlen)
    //     printf("TRUE\n");
    // else
    //     printf("FALSE\n");  
    
    // printf("\n");

    // //Testfunction for ft_strlcpy
    // printf("Testing strlcpy\n");
    // //Destination buffer
    // char * restrict dst[100];
    // const char * restrict src = "Testing strlcpy!";
    // size_t dstsize = 100;
    // /////TODO

    // printf("\n");

    // //Testfunction for ft_tolower
    // printf("Testing tolower:\n");
    // char *s_tolower = "TesTINg, if ToLOWer worKS!@#$^&*()_+1245698";
    // printf("TesTINg, if ToLOWer worKS!@#$^&*()_+1245698\n");
    // int i = 0;
    // while(s_tolower[i])
    // {
    //     printf("%c", ft_tolower(s_tolower[i]));
    //     i++;
    // }
    // printf(" (ft_tolower)\n");
    // i = 0;
    // while(s_tolower[i])
    // {
    //     printf("%c", tolower(s_tolower[i]));
    //     i++;
    // }
    // printf(" (tolower)\n");

    // printf("\n");

    // //Testfunction for ft_toupper
    // printf("Testing toupper:\n");
    // char *s_toupper = "TesTinG, iF TOupPer worKS!@#$^&*()_+1245698";
    // printf("TesTinG, iF TOupPer worKS!@#$^&*()_+1245698\n");
    // int i = 0;
    // while(s_toupper[i])
    // {
    //     printf("%c", ft_toupper(s_toupper[i]));
    //     i++;
    // }
    // printf(" (ft_toupper)\n");
    // i = 0;
    // while(s_toupper[i])
    // {
    //     printf("%c", toupper(s_toupper[i]));
    //     i++;
    // }
    // printf(" (toupper)\n");

    // printf("\n");

    // //Testfunction for ft_isprint
    // printf("Testing isprint:\n");
    // char *s_isprint = "Testing \t 789 \t ^!$@#\n 123456\n";
    // printf("Testing \t 789 \t ^!$@#\n 123456\n");
    // int i = 0;
    // while(s_isprint[i])
    // {
    //     printf("%i", ft_isprint(s_isprint[i]));
    //     i++;
    // }
    // printf(" (ft_isprint)\n");
    // i = 0;
    // while(s_isprint[i])
    // {
    //     printf("%i", isprint(s_isprint[i]));
    //     i++;
    // }
    // printf(" (isprint)\n");

    // printf("\n");

    // //Testfunction for ft_isascii
    // printf("Testing isascii:\n");
    // char *s_isascii = "Testing \t 789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš×\n";
    // printf("Testing \t 789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš×\n");
    // int i = 0;
    // while(s_isascii[i])
    // {
    //     printf("%i", ft_isascii(s_isascii[i]));
    //     i++;
    // }
    // printf(" (ft_isascii)\n");
    // i = 0;
    // while(s_isascii[i])
    // {
    //     printf("%i", isascii(s_isascii[i]));
    //     i++;
    // }
    // printf(" (isascii)\n");

    // printf("\n");

    // //Testfunction for ft_isalpha
    // printf("Testing isalpha:\n");
    // char *s_isalpha = "Testing \t 789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~";
    // printf("Testing \t 789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~\n");
    // int i = 0;
    // while(s_isalpha[i])
    // {
    //     printf("%i", ft_isalpha(s_isalpha[i]));
    //     i++;
    // }
    // printf(" (ft_isalpha)\n");
    // i = 0;
    // while(s_isalpha[i])
    // {
    //     printf("%i", isalpha(s_isalpha[i]));
    //     i++;
    // }
    // printf(" (isalpha)\n");

    // printf("\n");

    // //Testfunction for ft_isdigit
    // printf("Testing isdigit:\n");
    // char *s_isdigit = "Testing \t 0789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~";
    // printf("Testing \t 0789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~\n");
    // int i_isdigit = 0;
    // while(s_isdigit[i_isdigit])
    // {
    //     printf("%i", ft_isdigit(s_isdigit[i_isdigit]));
    //     i_isdigit++;
    // }
    // printf(" (ft_isdigit)\n");
    // i_isdigit = 0;
    // while(s_isdigit[i_isdigit])
    // {
    //     printf("%i", isdigit(s_isdigit[i_isdigit]));
    //     i_isdigit++;
    // }
    // printf(" (isdigit)\n");

    // printf("\n");

    // //Testfunction for ft_isalnum
    // printf("Testing isalnum:\n");
    // char *s_isalnum = "Testing \t 0789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~";
    // printf("Testing \t 0789 \t ^!$@#\n 123456\n €ƒ‚†ŒÝþš× XYZ~\n");
    // int i_isalnum = 0;
    // while(s_isalnum[i_isalnum])
    // {
    //     printf("%i", ft_isalnum(s_isalnum[i_isalnum]));
    //     i_isalnum++;
    // }
    // printf(" (ft_isalnum)\n");
    // i_isalnum = 0;
    // while(s_isalnum[i_isalnum])
    // {
    //     printf("%i", isalnum(s_isalnum[i_isalnum]));
    //     i_isalnum++;
    // }
    // printf(" (isalnum)\n");

    // printf("\n");

    //Testfunction for ft_atoi
    printf("Testing atoi:\n");
    printf("a = %i (atoi)\n", atoi("a"));
    printf("1234a = %i (atoi)\n", atoi("1234a"));
    printf("-1234a = %i (atoi)\n", atoi("-1234a"));
    printf("1234a4321 = %i (atoi)\n", atoi("1234a4321"));
    printf("-1 = %i (atoi)\n", atoi("-1"));
    printf("--1 = %i (atoi)\n", atoi("--1"));
    printf("-+1 = %i (atoi)\n", atoi("-+1"));
    printf("+-1 = %i (atoi)\n", atoi("+-1"));
    printf("0 = %i (atoi)\n", atoi("0"));
    printf("-0 = %i (atoi)\n", atoi("-0"));
    printf("1 = %i (atoi)\n", atoi("1"));
    printf("+1 = %i (atoi)\n", atoi("+1"));
    printf("++1 = %i (atoi)\n", atoi("++1"));
    printf(""" = %i (atoi)\n", atoi(""));
    printf("-2147483648 = %i (atoi)\n", atoi("-2147483648"));
    printf("-2147483649 = %i (atoi)\n", atoi("-2147483649"));
    printf("2147483647 = %i (atoi)\n", atoi("2147483647"));
    printf("214748364842 = %i (atoi)\n", atoi("214748364842"));
 
}

