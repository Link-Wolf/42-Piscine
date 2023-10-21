#include <stdio.h>
#include <stdlib.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int main(){
	int nbr;
	ft_ft(&nbr);
	printf("Res ex00 : %d\n", nbr);

/*	int *********nbr2=0;
	ft_ultimate_ft(nbr2);
	printf("Res ex01 : %d\n", *********nbr2);
*/
	int a1=11;
   	int	b1=596465;
	ft_swap(&a1, &b1);
	printf("Res ex02 : a = %d et b = %d\n", a1, b1);

	int a2=5;
	int b2=2;
	int div, mod;
	ft_div_mod(a2, b2, &div, &mod);
	printf("Res ex03 : a = %d, b= %d, div= %d, mod = %d\n", a2, b2, div, mod);

	int a3=5;
	int b3=2;
	printf("Res ex04 : a = %d, b = %d", a3, b3);
	ft_ultimate_div_mod(&a3, &b3);
	printf(", div = %d, mod = %d\n", a3, b3);

	char* str5 = "ex05 abcdefg\n";
	ft_putstr(str5);
	
	char* str6 = "test123";
	int count = ft_strlen(str6);
	printf("Res ex06 : %d\n", count);

	int tab7[] = {1,2,3,4,5};
	ft_rev_int_tab(tab7, 5);
	printf("Res ex07 : ");
	for(int i=0; i<5; i++){
		printf("%d", tab7[i]);
	}
	printf("\n");
	
	int tab8[] = {75,18,34,62,85,1,36};
	ft_sort_int_tab(tab8, 7);
	printf("Res ex08 : ");
      for(int i=0; i<7; i++){
          printf("%d, ", tab8[i]);
      }
      printf("\n");
}
