/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:42:07 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 04:03:25 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos;
	size_t	count;

	if (*to_find == 0)
		return ((char *)str);
	pos = 0;
	while (str[pos] && pos < len)
	{
		if (str[pos] == *to_find)
		{
			count = 1;
			while (str[pos + count] && str[pos + count] == to_find[count]
				&& (pos + count) < len)
				++count;
			if (to_find[count] == 0)
				return ((char *)(str + pos));
		}
		++pos;
	}
	return (NULL);
}
