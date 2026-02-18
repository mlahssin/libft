/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:20:22 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:00:12 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	c;
	unsigned char	*s;

	c = (unsigned char)ch;
	s = (unsigned char *)str;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		(s)++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
