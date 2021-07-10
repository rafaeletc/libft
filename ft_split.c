/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:57:46 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/10 17:41:52 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	index;
	int	n_word;
	int	control;

	index = 0;
	n_word = 0;
	control = 0;
	while (s[index] != '\0' && *s != '\0')
	{
		if (s[index] != c && control == 0)
		{
			control = 1;
			n_word++;
		}
		else if (s[index] == c)
			control = 0;
		index++;
	}
	return (n_word);
}

static char	*ft_string(const char *s, int init, int end)
{
	int		len;
	char	*str;
	int		index;

	len = end - init + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == 0)
		return (0);
	index = 0;
	while (init < end)
		str[index++] = s[init++];
	str[index] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count[2];
	int		start;

	if (s == 0)
		return (0);
	count[0] = 0;
	count[1] = 0;
	start = -1;
	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	while (count[0] <= ft_strlen(s))
	{
		if (s[count[0]] != c && start < 0)
			start = count[0];
		else if ((s[count[0]] == c || count[0] == ft_strlen(s)) && start >= 0)
		{
			split[count[1]] = ft_string(s, start, count[0]);
			++count[1];
			start = -1;
		}
		++count[0];
	}
	split[count[1]] = 0;
	return (split);
}
