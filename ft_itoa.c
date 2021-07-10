/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:09:50 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 21:32:21 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_nbr(long nl, int s)
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

static void	ft_convert_nbr(char *str, long nl, unsigned int nbr, int s)
{
	str[nbr] = '\0';
	str[--nbr] = nl % 10 + '0';
	nl /= 10;
	while (nl > 0)
	{
		str[--nbr] = nl % 10 + '0';
		nl /= 10;
	}
	if (s == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*str;
	long			nl;
	unsigned int	nbr;
	int				s;

	s = 1;
	if (n < 0)
	{
		nl = (long)n * -1;
		s = -1;
	}
	else
		nl = n;
	nbr = ft_get_nbr(nl, s);
	str = malloc(sizeof(char) * (nbr + 1));
	if (!str)
		return (NULL);
	ft_convert_nbr(str, nl, nbr, s);
	return (str);
}
