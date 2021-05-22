/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:12:25 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/20 12:36:21 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef __linux__
#include <ctype.h>
#include <bsd/string.h>
#endif
#ifdef __apple__
#include <ctype.h>
#include <string.h>
#endif
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c);

int main(void)
{
	char a; 
	a = 'a';

	printf("%i", isalpha(a));
	return 0;
}
