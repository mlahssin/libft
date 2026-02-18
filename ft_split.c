/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:40:48 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:02:25 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	is_word;

	i = 0;
	is_word = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (count);
}

int	word_len(char const *str, int start, char c)
{
	int	i;

	i = 0;
	while (str[start + i] != c && str[start + i])
		i++;
	return (i);
}

char	*fill(char const *s, int *index, char c)
{
	char	*str;
	int		len;
	int		i;

	while (s[*index] == c)
		(*index)++;
	len = word_len(s, *index, c);
	i = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s[*index] != c && s[*index])
	{
		str[i] = s[*index];
		i++;
		(*index)++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	int (i), (k), (len);
	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	len = count_words(s, c);
	str = malloc ((len + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (k < len)
	{
		str[k] = fill(s, &i, c);
		if (str[k] == NULL)
		{
			while (--k >= 0)
				free(str[k]);
			free(str);
			return (NULL);
		}
		k++;
	}
	str[k] = NULL;
	return (str);
}
