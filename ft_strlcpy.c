/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:14:15 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/11 21:35:50 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	length;

	if (!dest || !src)
		return (0);
	length = ft_strlen(src);
	if (size == 0)
		return (length);
	counter = 0;
	while (counter < size - 1 && counter < length)
	{
		dest[counter] = src[counter];
		++counter;
	}
	dest[counter] = '\0';
	return (length);
}
