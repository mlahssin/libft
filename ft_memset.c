/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:46:53 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:04:18 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*s;
	unsigned char	n;
	size_t			i;

	i = 0;
	n = (unsigned char)value;
	s = (unsigned char *)ptr;
	while (i < num)
	{
		s[i] = value;
		i++;
	}
	return ((void *)s);
}
