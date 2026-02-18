/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:00:37 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:02:02 by mlahssin         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(len + 1);
	if (joined == NULL)
		return (NULL);
	while (i < len)
	{
		while (s1[k])
			joined[i++] = s1[k++];
		k = 0;
		while (s2[k])
		{
			joined[i++] = s2[k++];
		}
	}
	joined[i] = '\0';
	return (joined);
}
