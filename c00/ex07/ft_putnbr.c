/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:11:49 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/12 11:13:09 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	raise(int base, int power);
int	loga10(int nb);

void	ft_putnbr(int nb)
{
	char	outchar;
	int		power;
	int		first_digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		power = loga10(nb);
		while (power >= 0)
		{
			first_digit = nb / raise(10, power);
			outchar = first_digit + '0';
			write(1, &outchar, 1);
			nb -= first_digit * raise(10, power);
			power--;
		}
	}
}

int	raise(int base, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (10 * raise(base, power - 1));
	}
}

int	loga10(int nb)
{
	int	ln;

	ln = 0;
	while (nb >= 10)
	{
		nb /= 10;
		ln++;
	}
	return (ln);
}
