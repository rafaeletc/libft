/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:37:06 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 14:30:49 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
		++counter;
	}
	return (dest);
}
