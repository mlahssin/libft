/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:48:04 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:03:59 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned char	*fill(const unsigned char *s, unsigned char *d, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				value;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	value = n;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s)
	{
		while (value > 0)
		{
			d[value - 1] = s[value - 1];
			value--;
		}
		return ((void *)d);
	}
	d = fill(s, d, n);
	return ((void *)d);
}
