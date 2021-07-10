/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:06:32 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 21:13:34 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	int	atoi;
	int	s;

	atoi = 0;
	s = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		++str;
	if (*str == '-')
	{
		s = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
		atoi = atoi * 10 + (*str++ - '0');
	return (atoi * s);
}
