/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 08:15:19 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/17 09:20:02 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);
int		is_valid5(char *base);
int		value_from_base5(int i, char *base);
int		is_in_base5(char c, char *base);
void	add_char5(int *value, char c, char *base);
void	sign_gestion5(char *str, int *i, int *sign);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_size;
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	base_size = is_valid5(base);
	if (base_size)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		sign_gestion5(str, &i, &sign);
		while (is_in_base5(str[i], base))
		{
			add_char5(&value, str[i], base);
			i++;
		}
	}
	return (sign * value);
}

void	add_char5(int *value, char c, char *base)
{
	int	i;
	int	base_size;

	i = 0;
	base_size = is_valid5(base);
	while (base[i] != c)
		i++;
	*value *= base_size;
	*value += i;
}

int	is_valid5(char *base)
{
	int	size;
	int	j;

	j = 0;
	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-'
			|| base[size] == ' ' || base[size] == '\n' || base[size] == '\f'
			|| base[size] == '\r' || base[size] == '\t' || base[size] == '\v')
			return (0);
		j = 0;
		while (j < size)
		{
			if (base[size] == base [j])
				return (0);
			j++;
		}
		size++;
	}
	if (size >= 2)
		return (size);
	else
		return (0);
}

int	is_in_base5(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	sign_gestion5(char *str, int *i, int *sign)
{
	while (str[*i] == '+'
		|| str[*i] == '-')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
}
