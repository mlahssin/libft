/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:55:46 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:00:23 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	num_all(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;
	int		i;

	nb = n;
	len = num_all(nb);
	str = malloc(len + 1);
	i = len - 1 ;
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb >= 10)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = nb % 10 + '0';
	str[len] = '\0';
	return (str);
}
