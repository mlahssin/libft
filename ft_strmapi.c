/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:50:07 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 14:34:03 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*str;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
