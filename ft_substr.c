/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:17:38 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/14 21:09:43 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	counter[2];

	if (!s || !*s)
		return (NULL);
	counter[0] = 0;
	while ((s[counter[0]] != '\0') && (counter[0] < start))
		++counter[0];
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	counter[1] = 0;
	while (s[counter[0]] != '\0' && counter[1] < len)
	{
		str[counter[1]] = s[counter[0]];
		++counter[0];
		++counter[1];
	}
	str[counter[1]] = '\0';
	if (counter[1] != len)
		return (NULL);
	return (str);
}
