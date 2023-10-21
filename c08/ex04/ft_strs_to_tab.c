/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:20:14 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/28 12:20:35 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	res = malloc(sizeof(*res) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		if (!res[i].copy)
			return (NULL);
		res[i].size = ft_strlen(av[i]);
		i++;
	}
	res[i].str = 0;
	res[i].copy = 0;
	res[i].size = 0;
	return (res);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	dst = (char *) malloc(sizeof(*dst) * (ft_strlen(src) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
