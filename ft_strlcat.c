/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:47:30 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:03:00 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	k;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	k = dst_len;
	while (k < size - 1 && src[i])
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (src_len + dst_len);
}
