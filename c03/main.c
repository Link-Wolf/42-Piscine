#include <stdio.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int main (){

	char str0[] = "abcde";
	char str02[] = "abc";
	printf("Ex00 :\nstr0 : %s\nstr1 : %s\ndiff : %d\n\n", str0, str02, ft_strcmp(str0, str02));
	
	char str1[] = "abcdefg";
	char str12[] = "abcde";
	printf("Ex01 :\nstr1 : %s\nstr12 : %s\nn : %d\ndiff : %d\n\n", str1, str12, 4, ft_strncmp(str1, str12, 4));

	char str2[6] = "abc";
	char str22[] = "def";
	printf("Ex02 :\nstr2 : %s\nstr22 : %s\nres : %s\n\n", str2, str22, ft_strcat(str2, str22));

	char str3[] = "abc";
	char str32[] = "defghijklmnopqrstuvwxyz";
	printf("Ex03 :\nstr3 : %s\nstr32 : %s\nn : %d\nres : %s\n\n", str3, str32, 5, ft_strncat(str3, str32, 5));

	char str40[] = "teeeeesestttt";
	char str41[] = "est";
	char str42[] = "abcdefg";
	char str43[] = "hi";
	char str44[] = "test";
	char str45[] = "";
	printf("Ex04 :\nstr40 : %s\nstr41 : %s\nres : %s\n\n", str40, str41, ft_strstr(str40, str41));
	printf("str42 : %s\nstr43 : %s\nres : %s\n\n", str42, str43, ft_strstr(str42, str43));
	printf("str44 : %s\nstr45 : %s\nres : %s\n\n", str44, str45, ft_strstr(str44, str45));

	char str50[] = "debut";
	char str51[] = "fin....ou pas";
	printf("Ex05 :\nstr50 : %s\nstr51 : %s\nres :%u\n\n", str50, str51, ft_strlcat(str50, str51, 3));
}
