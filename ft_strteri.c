/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:54:16 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 19:56:26 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	counter;

	if (!s || !f)
		return ;
	if (s || f)
	{
		counter = 0;
		while (s[counter] != '\0')
		{
			f(counter, (s + counter));
			++counter;
		}
	}
}
