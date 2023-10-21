#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"
#include "ex05/ft_split.c"

#include <stdio.h>

int main(){
    char *cestlexo0 = "bonjour, cest louane";
    printf("Ex00 :\nchaine initiale : %s\ncopie : %s\n\n", cestlexo0, ft_strdup(cestlexo0));

    int min01 = 8;
    int max01 = 27;
    int *tab = ft_range(min01, max01);
    printf("Ex01 :\nmin : %d  max : %d\n", min01, max01);
    size_t i = -1;
    while (tab[++i]) {
        printf("%d - ", tab[i]);
    }
    printf("\n\n");

    int *range;
    int min02 = -14;
    int max02 = 3800;
    int taille02 = ft_ultimate_range(&range, min02, max02);
    printf("Ex02 :\nmin : %d   max : %d\n", min02, max02);
    int i2 = -1;
    while (++i2 < taille02) {
        printf("%d - ", range[i2]);
    }
    printf("\ntaille : %d\n\n", taille02);

    char *chanson[] = {
		"Cest le jour 1",
		"Celui quon retient",
		"Celui qui revient",
		"Tout ne va pas bien"
	};
	char *refrain = " | Cest le refrain | ";
	char *louane_du_pauvre =  ft_strjoin(4, chanson, refrain);
	printf("Ex03 :\n%s\n\n", louane_du_pauvre);

    char *nbr4 = "-7FFFFFFF";
    char *base_from = "0123456789ABCDEF";
    char *base_to = "01";
	char *res = ft_convert_base(nbr4, base_from, base_to);
    printf("Ex04 :\n%s\n\n", res);*/

    char *str5 = "K5       ST0nmLspHlrRijE uoNVWXK 5FTLZfehKTnkhd6S2jx";
    char *charset = "poZby";
    char **tab5 = ft_split(str5, charset);
    printf("Ex05 :\n");
	int i5 = 0;
	while (i5 < (int)sizeof tab5)
	{
		write(1, (tab5[i5]), 16);
		write(1, "\n\n", 1);
		i5++;
	}
}
