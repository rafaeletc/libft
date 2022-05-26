/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:09:50 by rde-lima          #+#    #+#             */
/*   Updated: 2022/05/26 16:20:17 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_digits(int n)
{
	unsigned int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		++size;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	unsigned int	neg;

	size = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
		++size;
	}
	size += ft_get_digits(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	str[size] = '\0';
	while (size-- > neg)
	{
		str[size] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
