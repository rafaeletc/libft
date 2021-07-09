/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:09:50 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 13:46:35 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ndigit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa_disgusting_hack(int nu, int len)
{
	char	*str;
	int		i;
	long	n;

	n = (long)nu;
	str = malloc(sizeof(char) * len + (n < 0 ? 2 : 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		str[0] = '0';
	i = len - 1;
	while (i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (str[0] == '0' && len > 1)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ndigit(n);
	str = ft_itoa_disgusting_hack(n, len);
	return (str);
}
