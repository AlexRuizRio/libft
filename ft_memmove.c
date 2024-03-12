/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:17 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/12 12:50:21 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*desty;
	unsigned char	*cpy;
	unsigned int	i;

	desty = dst;
	cpy = src;
	if (dst == 0 || src == 0)
		return (0);
	if (cpy < desty && desty < cpy + len)
	{
		i = len;
		while (i > 0)
		{
			desty[i - 1] = cpy[i - 1];
			i--;
		}
		return (desty);
	}
	i = 0;
	while (i < len)
	{
		desty[i] = cpy[i];
		i++;
	}
	return (desty);
}
