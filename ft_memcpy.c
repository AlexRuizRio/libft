/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:11:43 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/12 11:11:46 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = dst;
	i = 0;
	if (dst == 0)
	{
		return (0);
	}
	while (i < n)
	{
		ptr[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
