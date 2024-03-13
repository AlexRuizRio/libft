/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:34:48 by alruiz-d          #+#    #+#             */
/*   Updated: 2024/03/13 15:34:50 by alruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	y;
	int	l;

	i = 0;
	l = ft_strlen(needle);
	if (l == 0)
		return (haystack);
	while (haystack[i] != 0 && len--)
	{
		y = 0;
		while (needle[y] != 0)
		{
			if (haystack[i + y] != needle[y])
				break ;
			y++;
		}
		if (y == l)
			return (haystack + i);
		i++;
	}
	return (0);
}

