/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:40:04 by jludt             #+#    #+#             */
/*   Updated: 2021/06/20 09:35:49 by julian           ###   ########.fr       */
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
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);


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

    // //Testfunction for ft_atoi
    // printf("Testing atoi:\n");
    // printf("a = %i (atoi)\n", atoi("a"));
    // printf(" a = %i (atoi)\n", atoi(" a"));
    // printf("a123 = %i (atoi)\n", atoi("a123"));
    // printf("1234a = %i (atoi)\n", atoi("1234a"));
    // printf("-1234a = %i (atoi)\n", atoi("-1234a"));
    // printf("1234a4321 = %i (atoi)\n", atoi("1234a4321"));
    // printf("-1 = %i (atoi)\n", atoi("-1"));
    // printf("--1 = %i (atoi)\n", atoi("--1"));
    // printf("-+1 = %i (atoi)\n", atoi("-+1"));
    // printf("+-1 = %i (atoi)\n", atoi("+-1"));
    // printf("0 = %i (atoi)\n", atoi("0"));
    // printf("-0 = %i (atoi)\n", atoi("-0"));
    // printf("1 = %i (atoi)\n", atoi("1"));
    // printf("+1 = %i (atoi)\n", atoi("+1"));
    // printf("++1 = %i (atoi)\n", atoi("++1"));
    // printf("= %i (atoi)\n", atoi(""));
    // printf(" = %i (atoi)\n", atoi(" "));
    // printf(" 123 = %i (atoi)\n", atoi(" 123"));
    // printf(" -123 = %i (atoi)\n", atoi(" -123"));
    // printf(" +123 = %i (atoi)\n", atoi(" +123"));
    // printf(" -+123 = %i (atoi)\n", atoi(" -+123"));
    // printf("     456 = %i (atoi)\n", atoi("     456"));
    // printf("     -456 = %i (atoi)\n", atoi("     -456"));
    // printf("-2147483648 = %i (atoi)\n", atoi("-2147483648"));
    // printf("-2147483649 = %i (atoi)\n", atoi("-2147483649"));
    // printf("2147483647 = %i (atoi)\n", atoi("2147483647"));
    // printf("214748364842 = %i (atoi)\n", atoi("214748364842"));
    
    /*printf("Test = %i\n", ft_atoi("Test"));
    printf("1 = %i\n", ft_atoi("1"));
    printf("+1 = %i\n", ft_atoi("+1"));
    printf("-1 = %i\n", ft_atoi("-1"));
    printf(" -1 = %i\n", ft_atoi(" -1"));
    printf(" 1 = %i\n", ft_atoi(" 1"));
    printf(" +1 = %i\n", ft_atoi(" +1"));
    printf("  +1 = %i\n", ft_atoi("       +1"));
    printf("123 = %i\n", ft_atoi("123"));
    printf("-456378 = %i\n", ft_atoi("-456378")); */

    
    ////Testfunction for ft_memset
    //char s_memset[] = "testing of the memset function";
    //printf("%s (memset)\n", s_memset);
    //memset(s_memset, '*', 5);
    //printf("%s (memset)\n", s_memset);
    //char s_ft_memset[] = "testing of the memset function";
    //printf("%s (ft_memset)\n", s_ft_memset);
    //ft_memset(s_ft_memset, '*', 5);
    //printf("%s (ft_memset)\n", s_ft_memset); 

    /*//Testfunction for ft_bzero
    char s_bzero[] = "testing of the bzero function";
    printf("%s (bzero)\n", s_bzero);
    bzero(s_bzero + 3, 5);
    printf("%s (bzero)\n", s_bzero);
    char s_ft_bzero[] = "testing of the bzero function";
    printf("%s (ft_bzero)\n", s_ft_bzero);
    ft_bzero(s_ft_bzero + 3, 5);
    printf("%s (ft_bzero)\n", s_ft_bzero); */

    /* //Testfunction for ft_memcpy
    char *src_memcpy = "testing of the memcpy function";
    char dest_memcpy[100];
    printf("%s (src_memcpy)\n", src_memcpy);
    memcpy(dest_memcpy, src_memcpy + 1, 5);
    printf("%s (src_memcpy)\n", src_memcpy);
    printf("%s (dest_memcpy)\n", dest_memcpy);
    printf("\n");
    char *src_ft_memcpy = "testing of the memcpy function";
    char dest_ft_memcpy[100];
    printf("%s (src_ft_memcpy)\n", src_memcpy);
    ft_memcpy(dest_ft_memcpy, src_ft_memcpy + 1, 5);
    printf("%s (src_ft_memcpy)\n", src_ft_memcpy);
    printf("%s (dest_ft_memcpy)\n", dest_ft_memcpy); */

    /* //Testfunction for ft_memccpy
    char *src_memccpy = "testing of the memccpy function";
    char dest_memccpy[100];
    printf("%s (src_memccpy)\n", src_memccpy);
    memccpy(dest_memccpy, src_memccpy, 'i', 2);
    printf("%s (src_memccpy)\n", src_memccpy);
    printf("%s (dest_memccpy)\n", dest_memccpy);
    printf("\n");
    char *src_ft_memccpy = "testing of the memccpy function";
    char dest_ft_memccpy[100];
    printf("%s (src_ft_memccpy)\n", src_ft_memccpy);
    ft_memccpy(dest_ft_memccpy, src_ft_memccpy, 'i', 2);
    printf("%s (src_ft_memccpy)\n", src_ft_memccpy);
    printf("%s (dest_ft_memccpy)\n", dest_ft_memccpy); */

    //Testfunction for ft_memccpy
    char *src_memmove = "testing of the memmove function";
    char dest_memmove[100];
    printf("%s (src_memmove)\n", src_memmove);
    memmove(dest_memmove, src_memmove, 13);
    printf("%s (src_memmove)\n", src_memmove);
    printf("%s (dest_memmove)\n", dest_memmove);
    printf("\n");
    char *src_ft_memmove = "testing of the memmove function";
    char dest_ft_memmove[100];
    printf("%s (src_ft_memmove)\n", src_ft_memmove);
    ft_memmove(dest_ft_memmove, src_ft_memmove, 13);
    printf("%s (src_ft_memmove)\n", src_ft_memmove);
    printf("%s (dest_ft_memmove)\n", dest_ft_memmove);
}

