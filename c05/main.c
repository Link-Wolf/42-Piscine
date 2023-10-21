#include <stdio.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main()
{
	int nb = 5;
	printf("Ex00 :\nnb : %d\nfactorielle : %d\n\n", nb, ft_iterative_factorial(nb));

	printf("Ex01 :\nnb : %d\nfactorielle rec : %d\n\n", nb, ft_recursive_factorial(nb));

	int power = 3;
	printf("Ex02 :\nnb : %d\npuissance : %d\nres : %d\n\n", nb, power, ft_iterative_power(nb, power));

	printf("Ex03 :\nnb : %d\npuissance : %d\nres fac : %d\n\n", nb, power, ft_recursive_power(nb, power));

	int index = 18;
	printf("Ex04 :\nindex : %d\n%dieme element de fibonacci : %d\n\n", index, index, ft_fibonacci(index));

	int carre = 169;
	printf("Ex05 :\ncarre : %d\nracine carre si entiere : %d\n\n", carre, ft_sqrt(carre));

	int prime = 9845;
	printf("Ex06 :\nnombre : %d\nis prime : %d\n\n", prime, ft_is_prime(prime));

	int prime2 = 49994;
	printf("Ex07 :\nnombre de depart : %d\nnext prime : %d\n\n", prime2, ft_find_next_prime(prime2));
}
