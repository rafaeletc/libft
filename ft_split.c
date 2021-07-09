/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:57:46 by rde-lima          #+#    #+#             */
/*   Updated: 2021/07/09 19:34:13 by rde-lima         ###   ########.fr       */
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
	char	*string;
	int		index;

	len = end - init + 1;
	string = (char *)malloc(len * sizeof(char));
	if (string == 0)
		return (0);
	index = 0;
	while (init < end)
		string[index++] = s[init++];
	string[index] = '\0';
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		begin_w;
	int		i;
	int		j;

	if (s == 0)
		return (0);
	i = -1;
	j = 0;
	begin_w = -1;
	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	while ((size_t)++i <= ft_strlen(s))
	{
		if (s[i] != c && begin_w < 0)
			begin_w = i;
		else if ((s[i] == c || (size_t)i == ft_strlen(s)) && begin_w >= 0)
		{
			split[j++] = ft_string(s, begin_w, i);
			begin_w = -1;
		}
	}
	split[j] = 0;
	return (split);
}
