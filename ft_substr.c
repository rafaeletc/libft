/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:17:38 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/04 18:46:14 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str[0] = '\0';
		return (str);
	}
	counter = 0;
	while (counter < len)
	{
		str[counter] = s[start + counter];
		++counter;
	}
	str[counter] = '\0';
	return (str);
}
