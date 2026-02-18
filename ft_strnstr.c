/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:14:53 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 21:08:45 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

char	*ft_strnstr(const char *s, const char *searched, size_t	len)
{
	size_t	i;
	size_t	s_len;
	size_t	ser_len;

	i = 0;
	if (s == NULL || searched == NULL)
		return (NULL);
	if (searched[0] == '\0')
		return ((char *)s);
	if (len == 0)
		return (NULL);
	s_len = ft_strlen(s);
	ser_len = ft_strlen(searched);
	while (s[i] && i < len && i + ser_len <= len)
	{
		if (s[i] == searched[0])
		{
			if (ft_strncmp(s + i, searched, ser_len) == 0)
				return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}

int main ()
{
	char str [] = "tester bonjour";
	char str1 [] = "bon";
	printf("%s",ft_strnstr(str,str1,sizeof(str)));
}
