#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"

int main()
{
	char src[] = "dadadada" ;
	char dest[] = "asdefesf";
	printf("Ex00 : src : %s\ndest : %s\ndest_post : %s\n\n", src, dest, ft_strcpy(dest, src));

	char src2[] = "dadea";
	char dest2[] = "popopopo";
	printf("Ex01 : src : %s\ndest : %s\ndest_post : %s\n\n", src2, dest2, ft_strncpy(dest2, src2, 5));

	printf("Ex02 : \nabdegasr : %d\n1546fa : %d\n\n",ft_str_is_alpha("abdegasr"), ft_str_is_alpha("1546fa"));

	printf("Ex03 : \n125842 : %d\n1546fa : %d\n\n", ft_str_is_numeric("125842"), ft_str_is_numeric("1546fa"));

	printf("Ex04 : \nabchufGFTYU : %d\nqwerty : %d\n\n", ft_str_is_lowercase("abchufGFTYU"), ft_str_is_lowercase("qwerty"));

	printf("Ex05 : \nabcdefgHHH : %d\nQWERTY : %d\n\n", ft_str_is_uppercase("abcdefgHHH"), ft_str_is_uppercase("QWERTY"));

	printf("Ex06 : \nabcde<>?8 : %d\nyt p u : %d\n\n", ft_str_is_printable("abcde<>?8"), ft_str_is_printable("yt p\n u"));

	char test1[] = "c'EsT Le TESt";
	char test2[] = "SeCoNd TeSt";
	printf("Ex07 : c'Est Le TESt : %s\nSeCoNd TeSt : %s\n\n", ft_strupcase(test1), ft_strupcase(test2));

	char test3[] = "c'EsT Le TESt";
	char test4[] = "SeCoNd TeSt";
	printf("Ex08 : c'Est Le TESt : %s\nSeCoNd TeSt : %s\n\n", ft_strlowcase(test3), ft_strlowcase(test4));

	char test5[] = "bonjour c'est la phrase";
	char test6[] = "bonsoir c'est l'autre phrase";
	printf("Ex09 : bonjour c'est la phrase : %s\nbonsoir c'est l'autre phrase : %s\n\n", ft_strcapitalize(test5), ft_strcapitalize(test6));
}
