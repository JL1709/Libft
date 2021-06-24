/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:40:04 by jludt             #+#    #+#             */
/*   Updated: 2021/06/24 17:42:16 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Testfunctions for Libft

//Necessary libraries to run tests
#include <stdio.h>
#include <stddef.h>
#include <string.h>
// #include <bsd/string.h>
#include <ctype.h>
#include <stdlib.h>

//Prototypes of functions which shell be tested
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// size_t	strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);


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

    /*// Testfunction for ft_strlcpy
    const char *src_strlcpy = "Testing strlcpy!";
    char dst_strlcpy[100];
    char dst_ft_strlcpy[100];
    printf("length = %lu (strlcpy)\n", strlcpy(dst_strlcpy, src_strlcpy, 5));
    printf("length = %lu (ft_strlcpy)\n", ft_strlcpy(dst_ft_strlcpy, src_strlcpy, 5));
    */

    /* // Testfunction for ft_strlcat
    char *src_strlcat = "6789";
    printf("size = 0\n");
    char dst_strlcat0[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat0, src_strlcat, 0));
    printf("%s (strlcat)\n", dst_strlcat0);
    char dst_ft_strlcat0[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat0, src_strlcat, 0));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat0);
    printf("\n");
    printf("size = 1\n");
    char dst_strlcat1[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat1, src_strlcat, 1));
    printf("%s (strlcat)\n", dst_strlcat1);
    char dst_ft_strlcat1[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat1, src_strlcat, 1));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat1);
    printf("\n");
    printf("size = 2\n");
    char dst_strlcat2[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat2, src_strlcat, 2));
    printf("%s (strlcat)\n", dst_strlcat2);
    char dst_ft_strlcat2[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat2, src_strlcat, 2));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat2);
    printf("\n");
    printf("size = 3\n");
    char dst_strlcat3[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat3, src_strlcat, 3));
    printf("%s (strlcat)\n", dst_strlcat3);
    char dst_ft_strlcat3[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat3, src_strlcat, 3));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat3);
    printf("\n");
    printf("size = 4\n");
    char dst_strlcat4[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat4, src_strlcat, 4));
    printf("%s (strlcat)\n", dst_strlcat4);
    char dst_ft_strlcat4[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat4, src_strlcat, 4));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat4);
    printf("\n");
    printf("size = 5\n");
    char dst_strlcat5[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat5, src_strlcat, 5));
    printf("%s (strlcat)\n", dst_strlcat5);
    char dst_ft_strlcat5[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat5, src_strlcat, 5));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat5);
    printf("\n");
    printf("size = 6\n");
    char dst_strlcat6[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat6, src_strlcat, 6));
    printf("%s (strlcat)\n", dst_strlcat6);
    char dst_ft_strlcat6[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat6, src_strlcat, 6));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat6);
    printf("\n");
    printf("size = 7\n");
    char dst_strlcat7[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat7, src_strlcat, 7));
    printf("%s (strlcat)\n", dst_strlcat7);
    char dst_ft_strlcat7[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat7, src_strlcat, 7));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat7);
    printf("\n");
    printf("size = 8\n");
    char dst_strlcat8[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat8, src_strlcat, 8));
    printf("%s (strlcat)\n", dst_strlcat8);
    char dst_ft_strlcat8[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat8, src_strlcat, 8));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat8);
    printf("\n");
    printf("size = 9\n");
    char dst_strlcat9[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat9, src_strlcat, 9));
    printf("%s (strlcat)\n", dst_strlcat9);
    char dst_ft_strlcat9[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat9, src_strlcat, 9));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat9);
    printf("\n");
    printf("size = 10\n");
    char dst_strlcat10[] = "12345";
    printf("%lu (strlcat)\n", strlcat(dst_strlcat10, src_strlcat, 10));
    printf("%s (strlcat)\n", dst_strlcat10);
    char dst_ft_strlcat10[] = "12345";
    printf("%lu (ft_strlcat)\n", ft_strlcat(dst_ft_strlcat10, src_strlcat, 10));
    printf("%s (ft_strlcat)\n", dst_ft_strlcat10); */

    /* // Testfunction for ft_strchr
    const char *s_strchr = "testing of the strchr function";
    printf("%s (strchr)\n", strchr(s_strchr, 'z'));
    printf("%s (ft_strchr)\n", ft_strchr(s_strchr, 'z'));
    printf("%s (strchr)\n", strchr(s_strchr, 'i'));
    printf("%s (ft_strchr)\n", ft_strchr(s_strchr, 'i'));
    printf("%s (strchr)\n", strchr(s_strchr, '\0'));
    printf("%s (ft_strchr)\n", ft_strchr(s_strchr, '\0')); */

    /* // Testfunction for ft_strrchr
    const char *s_strrchr = "testing of the strrchr function";
    printf("%s (strrchr)\n", strrchr(s_strrchr, 'z'));
    printf("%s (ft_strrchr)\n", ft_strrchr(s_strrchr, 'z'));
    printf("%s (strrchr)\n", strrchr(s_strrchr, 'c'));
    printf("%s (ft_strrchr)\n", ft_strrchr(s_strrchr, 'c'));
    printf("%s (strrchr)\n", strrchr(s_strrchr, '\0'));
    printf("%s (ft_strrchr)\n", ft_strrchr(s_strrchr, '\0')); */

    // printf("\n");

    /* // Testfunction for ft_strnstr
    const char *big_strnstr = "testing of the strnrstr function";
    const char *little_strnstr = "of";
    printf("%s (strnstr)\n", strnstr(big_strnstr, little_strnstr, 9));
    printf("%s (ft_strnstr)\n", ft_strnstr(big_strnstr, little_strnstr, 9));
    */    

    /* // Testfunction for ft_strncmp
    char *s1_strncmp = "testing of the strncmp function";
    char *s2_strncmp = "testing of the strncmp function";
    printf("%i (strncmp)\n", strncmp(s1_strncmp, s2_strncmp, 20));
    printf("%i (ft_strncmp)\n", ft_strncmp(s1_strncmp, s2_strncmp, 20)); */
    

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
    
    // printf("Test = %i\n", ft_atoi("Test"));
    // printf("1 = %i\n", ft_atoi("1"));
    // printf("+1 = %i\n", ft_atoi("+1"));
    // printf("-1 = %i\n", ft_atoi("-1"));
    // printf(" -1 = %i\n", ft_atoi(" -1"));
    // printf(" 1 = %i\n", ft_atoi(" 1"));
    // printf(" +1 = %i\n", ft_atoi(" +1"));
    // printf("  +1 = %i\n", ft_atoi("       +1"));
    // printf("123 = %i\n", ft_atoi("123"));
    // printf("-456378 = %i\n", ft_atoi("-456378")); 

    
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

    /* //Testfunction for ft_memccpy
    char *src_memmove = "testing of the memmove function";
    char dest_memmove[100];
    printf("%s (src_memmove)\n", src_memmove);
    memmove(dest_memmove, src_memmove, 2);
    printf("%s (src_memmove)\n", src_memmove);
    printf("%s (dest_memmove)\n", dest_memmove);
    printf("\n");
    char *src_ft_memmove = "testing of the memmove function";
    char dest_ft_memmove[100];
    printf("%s (src_ft_memmove)\n", src_ft_memmove);
    ft_memmove(dest_ft_memmove, src_ft_memmove, 2);
    printf("%s (src_ft_memmove)\n", src_ft_memmove);
    printf("%s (dest_ft_memmove)\n", dest_ft_memmove); */

    /* //Testfunction for ft_memchr
    char *s_memchr = "testing of the memchr function";
    printf("%s (s_memchr)\n", s_memchr);
    char *s_find_memchr = memchr(s_memchr, 'o', 10);
    printf("%s (s_memchr)\n", s_find_memchr);
    printf("\n");
    char *s_ft_memchr = "testing of the memchr function";
    printf("%s (s_ft_memchr)\n", s_ft_memchr);
    char *s_find_ft_memchr = ft_memchr(s_ft_memchr, 'o', 10);
    printf("%s (s_ft_memchr)\n", s_find_ft_memchr); */

    /* //Testfunction for ft_memcmp
    char *s1_memcpm = "teating of the memcmp function";
    char *s2_memcpm = "testing of the memcmp function";
    printf("%i (memcmp)\n", memcmp(s1_memcpm, s2_memcpm, 10));
    printf("\n");
    char *s1_ft_memcpm = "teating of the memcmp function";
    char *s2_ft_memcpm = "testing of the memcmp function";
    printf("%i (ft_memcmp)\n", ft_memcmp(s1_ft_memcpm, s2_ft_memcpm, 10));
    */

    // //Testfunction for ft_strdup
    // char *s_strdup = "testing the strdup function";
    // // char *s_duplicate_strdup = strdup(s_strdup);
    // printf("%s (original)\n", s_strdup);
    // printf("%s (strdup)\n", strdup(s_strdup));
    // printf("%s (ft_strdup)\n", ft_strdup(s_strdup));

    // //Testfunction for ft_strdup
	// char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	// char *set = " ";
	// char *s1_trim = ft_strtrim(s1, set);
	// printf("s1_trim =  %s\n", s1_trim);

	// //Testfunction for ft_split
	// char *s = "abcdefhji";
	// char **split = ft_split(s, 'd');
	// printf("s1 = %s\n", split[0]);
	// printf("s1 = %s\n", split[1]);

	// Testfunction for ft_itoa
	int n = 0;
	printf("%i = %s\n", n, ft_itoa(n));
	char *i1 = ft_itoa(-623);
	printf("-623 = %s\n", i1);
	
}

