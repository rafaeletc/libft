/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:05:52 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 14:28:43 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				counter;
	const unsigned char	*str1;
	const unsigned char	*str2;

	counter = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n > 0)
	{
		while (counter < n)
		{
			if (str1[counter] != str2[counter])
				return ((int)(str1[counter] - str2[counter]));
			++counter;
		}
	}
	return (0);
}
