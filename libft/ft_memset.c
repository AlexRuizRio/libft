/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:13:42 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/11 18:13:45 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = b;
	i = 0;
	if (b == 0)
	{
		return (0);
	}
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
