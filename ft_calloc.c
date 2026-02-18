/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:40:33 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:05:45 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			i;
	unsigned char	*str;

	if (size != 0 && num > SIZE_MAX / size)
		return (NULL);
	i = 0;
	str = malloc(num * size);
	if (str == NULL)
		return (NULL);
	while (i < (num * size))
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
