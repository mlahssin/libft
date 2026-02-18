/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:25:43 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:06:19 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int ch, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	c;

	str = (unsigned char *)s;
	c = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
