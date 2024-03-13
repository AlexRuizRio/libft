/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:29:14 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/12 15:29:17 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (dstsize == 0)
		return (0);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[x] != '\0')
		x++;
	if (x >= i)
	{
		return (i);
	}
	else
	{
		return (x);
	}
}
