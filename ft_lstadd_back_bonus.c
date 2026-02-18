/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:10:33 by mlahssin          #+#    #+#             */
/*   Updated: 2025/10/21 08:04:35 by mlahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	head = *lst;
	while ((head)->next)
	{
		head = head->next;
	}
	head->next = new;
}
