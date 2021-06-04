/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:06:32 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/04 00:23:54 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	int		atoi;

	atoi = 0;
	s = -1;
	while (*str == 32)
		str++;
	if ((*str == 43) || (*str == 45))
		if (*str++ == 45)
			s = 1;
	while (ft_isdigit(*str))
	{
		atoi *= 10;
		atoi -= (*str - 48);
		if (*str++ < atoi)
		{
			if (s < 0)
				return (-1);
			return (0);
		}
	}
	return (atoi * s);
}
