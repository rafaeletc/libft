/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:18:12 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/18 21:41:03 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_len;
	unsigned int	dest_len;

	counter = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (src_len);
	if (size <= src_len)
		return (size + src_len);
	while (size && (size - dest_len) && src[counter])
	{
		dest[dest_len + counter] = src[counter];
		--size;
		++counter;
	}
	dest[counter + dest_len] = '\0';
	return (dest_len + src_len);
}
