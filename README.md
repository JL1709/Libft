# Libft
This repo provides a C library regrouping usual functions that can be used for further projects. Therefore functions of the C standard library were recoded as well as some other utility functions.
Tested on macOS Monterey.

## Installation

#### 1) Clone this repository 
```
git clone git@github.com:JL1709/Libft.git
```

#### 2) Run Makfile (creates library file "libft.a")
```
cd Libft/
make
```

#### 3)  Run program with library
Include header file to your code
```
#include "pathToLibftFolder/libft.h"
```
For example:
```ruby
#include <stdio.h>
#include "pathToLibftFolder/libft.h"

int main(void)
{
	char	*src = "demo";
	int	len_src = ft_strlen(src);
	
	printf("%s = %d\n", src, len_src);

	return (0);
}
```

Compile your code with library file, e.g.
```
gcc main.c "pathToLibftFolder"/libft.a
```

Run executable
```
./a.out
```
demo.c file provided for testing

## Supported functions
- atoi
- bzero
- calloc
- isalnum
- isalpha
- isascii
- isdigit
- isprint
- itoa
- lstadd_back
- lstadd_front
- lstclear
- lstdelone
- lstiter
- lstlast
- lstmap
- lstnew
- lstsize
- memccpy
- memchr
- memcmp
- memcpy  
- memmove
- memset
- putchar_fd
- putendl_fd
- putnbr_fd
- putstr_fd
- split
- strchr
- strdup
- strjoin
- strlcat
- strlcpy
- strlen
- strmapi
- strncmp
- strnstr
- strrchr
- strtrim
- substr
- tolower
- toupper
		
Further explanations about the functions can be found inside the code
