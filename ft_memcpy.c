/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:01:39 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:04:35 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (num == 0 || src == dest)
		return (dest);
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
