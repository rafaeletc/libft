/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:09:50 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/10 17:28:53 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_digits(long nl, int s)
{
	unsigned int	nbr;

	if (nl == 0)
		return (1);
	nbr = 0;
	while (nl > 0)
	{
		nl /= 10;
		nbr++;
	}
	if (s == -1)
		nbr++;
	return (nbr);
}

static void	ft_convert_nbr(char *str, long nbr, unsigned int digits, int sign)
{
	str[digits] = '\0';
	str[--digits] = nbr % 10 + '0';
	nbr /= 10;
	while (nbr > 0)
	{
		str[--digits] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*str;
	long			nbr;
	unsigned int	digits;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		nbr = (long)n * -1;
		sign = -1;
	}
	else
		nbr = n;
	digits = ft_get_digits(nbr, sign);
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	ft_convert_nbr(str, nbr, digits, sign);
	return (str);
}
