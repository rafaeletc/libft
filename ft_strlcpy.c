/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:14:15 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/16 22:36:00 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (counter < size)
	{
		dest[counter] = src[counter];
		++counter;
	}
	--counter;
	if (counter <= size)
	{
		while (dest[counter] != '\0')
		{
			dest[counter] = '\0';
			++counter;
		}
	}
	counter = 0;
	while (src[counter] != '\0')
		++counter;
	return (counter);
}
