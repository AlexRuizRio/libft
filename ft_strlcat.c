/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:42:22 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/11 15:42:25 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size <= i)
		len += dstsize;
	else
		len += i;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
