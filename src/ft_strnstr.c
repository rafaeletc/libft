/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:42:07 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/18 21:41:23 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find)
{
	unsigned int	counter;
	unsigned int	length;

	if (to_find[0] == '\0')
		return ((char *)str);
	counter = 0;
	while (str[counter] != '\0')
	{
		length = counter;
		while (to_find[length - counter] == str[length])
			if (to_find[++length - counter] == '\0')
				return ((char *)str + counter);
		++counter;
	}
	return (0);
}
