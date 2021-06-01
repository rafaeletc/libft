/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:42:58 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 14:31:33 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		counter;
	char		*odest;
	const char	*osrc;

	counter = 0;
	odest = (char *)dest;
	osrc = (const char *)src;
	while (counter < n)
	{
		odest[counter] = osrc[counter];
		if ((unsigned const char)osrc[counter] == (unsigned char)c)
			return ((char *)dest + counter + 1);
		++counter;
	}
	return (NULL);
}
