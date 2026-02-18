/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:16:32 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:11:39 by mlahssin         ###   ########.fr       */
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

size_t	allo_num(size_t len, size_t strt, size_t max)
{
	if (len - strt >= max)
		return (max);
	return (len - strt);
}

char	*len_allo(char *str)
{
	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	sub_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	subs = NULL;
	if (start >= ft_strlen(s))
	{
		subs = len_allo(subs);
		return (subs);
	}
	i = 0;
	sub_len = allo_num(ft_strlen(s), start, len);
	subs = malloc(sub_len + 1);
	if (subs == NULL)
		return (NULL);
	while (i < sub_len)
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
