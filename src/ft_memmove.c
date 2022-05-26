/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:58:56 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 14:23:54 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*osrc;
	unsigned char			*odest;

	osrc = (unsigned char *)src;
	odest = (unsigned char *)dest;
	if (osrc < odest)
		while (n--)
			*(odest + n) = *(osrc + n);
	else if (osrc > odest)
		ft_memcpy(dest, src, n);
	return (dest);
}
