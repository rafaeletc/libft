/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:31:19 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/04 17:41:19 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		++set;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	static size_t	counter[2];

	if (!s1 || !set)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[counter[0]] != '\0')
	{
		if (!ft_isset(s1[counter[0]], set))
		{
			str[counter[1]] = s1[counter[0]];
			++counter[1];
		}
		++counter[0];
	}
	if (!str)
		return (NULL);
	str[counter[1]] = '\0';
	return (str);
}
