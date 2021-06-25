/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:57:46 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/14 21:28:32 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitwords(char const *s, char c)
{
	static int	counter[3];

	while (s[counter[0]] != '\0')
	{
		if ((s[counter[0]] == c) && (counter[1] == 1))
			counter[1] = 0;
		if ((counter[1] == 0) && (s[counter[0]] != c))
		{
			counter[1] = 1;
			++counter[2];
		}
		++counter[0];
	}
	return (counter[2]);
}

static int	ft_split_length(char const *s, char c)
{
	int	counter;
	int	length;

	counter = 0;
	length = 0;
	while ((s[counter] != c) && (s[counter] != '\0'))
	{
		++counter;
		++length;
	}
	return (length);
}


char	**ft_split(char const *s, char c)
{
	int		counter;
	int		words;
	char	**split;

	if (s && *s)
		words = ft_splitwords(s, c);
	else
		words = 0;
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	counter = 0;
	while (words--)
	{
		while ((*s == c) && (*s != '\0'))
			++s;
		split[counter] = ft_substr(s, 0, ft_split_length(s, c));
		if (split[counter] == NULL)
			return (NULL);
		s += ft_split_length(s, c);
		++counter;
	}
	split[counter] = NULL;
	return (split);
}
