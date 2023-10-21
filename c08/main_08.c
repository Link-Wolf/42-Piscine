#include "ex04/ft_strs_to_tab.c"
#include "ex04/ft_stock_str.h"
#include "ex05/ft_stock_str.h"
#include "ex05/ft_show_tab.c"
#include <stdio.h>

int main()
{
	char *avenir[] = {
		"C'est le jour unnnnnnnn",
		"Celui qu'on retiennnnt",
		"Celui qui reviennnnt",
		"Tout ne va pas biennnn"
	};
	struct s_stock_str *tab = ft_strs_to_tab(4, avenir);
	ft_show_tab(tab);
	free(tab);
	return (0);
}
