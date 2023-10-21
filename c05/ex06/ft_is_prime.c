/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:34:06 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/12/02 11:26:54 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt6(int nb);

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt_nbr;

	if (nb < 2)
		return (0);
	sqrt_nbr = ft_sqrt6(nb);
	i = 2;
	while (i < sqrt_nbr)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt6(int nb)
{
	int	i;

	i = nb % 2;
	while (i * i < nb && i < 46340)
		i += 2;
	return (i);
}
