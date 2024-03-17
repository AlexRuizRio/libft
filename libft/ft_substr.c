/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:03:10 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/14 19:03:13 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*str;
	size_t	i;

	length = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= length)
		return (0);
	if (length < len + start)
		len = length - start;
	str = malloc(length + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[start + 1];
		i++;
	}
	return (str);
}
