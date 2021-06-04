/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:08:09 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/04 00:22:52 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *str1)
{
	size_t		counter;
	char		*str;

	str = malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (!str || !str1)
		return (NULL);
	counter = 0;
	while (counter != ft_strlen(str1))
	{
		str[counter] = str1[counter];
		++counter;
	}
	str[counter] = '\0';
	return (str);
}
