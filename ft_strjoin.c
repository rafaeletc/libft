/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 00:25:10 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/11 15:15:57 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	counter;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	counter = 0;
	while (*s1 != '\0')
		str[counter++] = *s1++;
	while (*s2 != '\0')
		str[counter++] = *s2++;
	str[counter++] = '\0';
	return (str);
}
