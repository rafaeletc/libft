/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:08:09 by rde-lima          #+#    #+#             */
/*   Updated: 2021/11/22 02:55:15 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	counter;
	char	*str;

	if (!str1)
		return (NULL);
	str = malloc(ft_strlen(str1) + 1);
	if (!str)
		return (NULL);
	counter = 0;
	while (*str1 != '\0')
		str[counter++] = *str1++;
	str[counter] = '\0';
	return (str);
}
