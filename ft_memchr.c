/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:02:18 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/30 14:14:12 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	counter;

	counter = 0;
	str = (char *)s;
	while (counter < n)
	{
		if ((unsigned char)str[counter] == (unsigned char)c)
			return ((char *)s + counter);
		++counter;
	}
	return (NULL);
}
