/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:37:06 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/10 16:41:29 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*odest;
	char	*osrc;

	if (dest == src)
		return (dest);
	odest = (char *)dest;
	osrc = (char *)src;
	while (n-- > 0)
		*odest++ = *osrc++;
	return (dest);
}
