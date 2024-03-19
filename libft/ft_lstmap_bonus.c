/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:26:34 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/19 13:27:46 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*tem;

	while(*lst)
	{
		f(lst->content);
		lstnew = ft_lstnew(lst->content);
		lstnew->next = lst->next
		tem = lst;
		del(tem->content);
		free(tem); 
	}
		return (lstnew);	
}
