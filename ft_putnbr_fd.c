/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:49:46 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 15:43:57 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		tmp;

	nbr = (long)n;
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nbr, fd);
	}
	if (nbr > 9)
	{
		tmp = (nbr % 10) + '0';
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd(tmp, fd);
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar_fd((nbr + '0'), fd);
}
