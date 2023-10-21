#include <stdio.h>

#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"

int main(){
	char *str0 = "abcdefg";
	printf("Ex00 : str0 : %s\ntaille : %d\n\n", str0, ft_strlen(str0));

	char *str1 = "hijkl";
	printf("Ex01 : str0 : %s\n", str1);
	ft_putstr(str1);

	int nb = -2147483648;
	printf("\n\nEx02 : nb : %d\naffichage : \n\n", nb);
	ft_putnbr(nb);

	char *str3 = "  \n  \v -++--+-+---+123456q859";
	char *str31 = "123";
	char *str32 = "  +-+-+a45";
	char *str33 = "";
	char *str34 = "666 -4a";
	printf("Ex03 : str3 : %s - int : %d\nstr31 : %s - int : %d\nstr32 : %s - int : %d\nstr33 : %s - int : %d\nstr34 : %s - int : %d\n\n", str3, ft_atoi(str3), str31, ft_atoi(str31), str32, ft_atoi(str32), str33, ft_atoi(str33), str34, ft_atoi(str34));

	int nbr4 = 48;
	char *base = "0123456789ABCDEF";
	printf("Ex04 : nbr : %d en base 10\nbase : %s\n, res : \n\n", nbr4, base);
	ft_putnbr_base(nbr4, base);

	char *str5 = "  \n +---+-09876AEartdytyuio";
	char *base5 = "0123456789ABCDEF";
	printf("Ex05 : str5 : %s\nbase : %s\nres : %d", str5, base5, ft_atoi_base(str5, base));
}
