/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:05:39 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/12 14:15:12 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr;

	if (!lst || !del)
		return ;
	temp = NULL;
	ptr = *lst;
	while (ptr)
	{
		temp = ptr->next;
		ft_lstdelone(temp, (*del));
		ptr = temp;
	}
	*lst = NULL;
	return ;
}
