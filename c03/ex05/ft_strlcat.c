/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:31:26 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/16 15:15:48 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_size;
	unsigned int	s_size;

	i = 0;
	d_size = 0;
	s_size = 0;
	while (src[s_size])
	{
		s_size++;
	}
	while (dest[d_size])
		d_size++;
	while (i + d_size + 1 < size && src[i])
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	if (size > d_size)
		return (d_size + s_size);
	return (size + s_size);
}
