/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:06:23 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:01:40 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int ch);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s1;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	len_s1 = ft_strlen(s1);
	while (len_s1 > i && ft_strchr(set, s1[len_s1 - 1]) != NULL)
		len_s1--;
	return (ft_substr(s1, i, len_s1 - i));
}
