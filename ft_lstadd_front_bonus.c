/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:45:18 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:05:24 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	new -> next = *list;
	*list = new;
}
