/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:03:40 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/19 11:03:44 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst->content == NUll)
		lst->content = new;
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
}
