/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:46:56 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/12/02 11:28:18 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime7(int nb);
int	ft_sqrt7(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!ft_is_prime7(nb))
		nb++;
	return (nb);
}

int	ft_is_prime7(int nb)
{
	int	i;
	int	sqrt_nbr;

	sqrt_nbr = ft_sqrt7(nb);
	i = 2;
	if (nb < 2)
		return (0);
	while (i < sqrt_nbr)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt7(int nb)
{
	int	i;

	i = nb % 2;
	while (i * i < nb && i < 46340)
		i += 2;
	return (i);
}
