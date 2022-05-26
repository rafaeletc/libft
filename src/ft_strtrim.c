/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:31:19 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 19:27:40 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	counter;

	if (!s1)
		return (NULL);
	counter = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[counter] && ft_strchr(set, s1[counter]))
	{
		start = (counter) + 1;
		++counter;
	}
	if (start > ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	counter = ft_strlen(s1) - 1;
	while (counter && s1[counter] && ft_strchr(set, s1[counter]))
	{
		end = counter - 1;
		--counter;
	}
	return (ft_substr(s1, start, (end - start + 1)));
}
