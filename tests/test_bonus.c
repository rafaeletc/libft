/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:43:04 by rde-lima          #+#    #+#             */
/*   Updated: 2021/11/20 21:06:05 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"test.h"

int	main(void)
{
	t_list	*temp;

	temp = ft_lstnew((void *)"first");
	ft_lstadd_front(&temp, ft_lstnew((void *)"new"));
}
