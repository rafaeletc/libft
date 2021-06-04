/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:37:06 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/02 16:42:37 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*odest;
	const char	*osrc;

	odest = (char *)dest;
	osrc = (const char *)src;
	while (n--)
		*odest++ = *osrc++;
	return (odest);
}
