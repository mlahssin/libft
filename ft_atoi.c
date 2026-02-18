/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:10:40 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/20 13:01:19 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	i;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num = num * sign;
	return (num);
}
