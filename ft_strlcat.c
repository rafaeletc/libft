/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:18:12 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/11 21:37:10 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	length;

	if (!dest || !src)
		return (0);
	counter = 0;
	length = 0;
	while (dest[counter] && counter < size)
		++counter;
	while (src[length] && (counter + length + 1) < size)
	{
		dest[counter + length] = src[length];
		++length;
	}
	if (counter != size)
		dest[counter + length] = '\0';
	return (counter + ft_strlen(src));
}
