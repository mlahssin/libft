/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:58:16 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:00:48 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int ch)
{
	unsigned char	*str;
	unsigned char	c;
	int				value;
	int				len;

	str = (unsigned char *)s;
	c = (unsigned char)ch;
	len = ft_strlen(str);
	value = len - 1;
	while (value >= 0)
	{
		if (str[value] == c)
			return ((char *)str + value);
		value--;
	}
	if (c == 0)
		return ((char *)str + len);
	return (NULL);
}
