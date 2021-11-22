/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:42:30 by rde-lima          #+#    #+#             */
/*   Updated: 2021/11/20 21:58:55 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <limits.h>

int	main(void)
{
	ft_putnbr_fd(0, 0);
	printf("\n");
	ft_putnbr_fd(10, 0);
	printf("\n");
	ft_putnbr_fd(-42, 0);
	printf("\n");
	ft_putnbr_fd(INT_MAX, 0);
	printf("\n");
	ft_putnbr_fd(INT_MIN, 0);
	printf("\n");
	return (0);
}
