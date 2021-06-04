/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:10:04 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/02 17:16:16 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void		*dest;

	dest = malloc(num * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (num * size));
	return (dest);
}
