/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:12:25 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/23 12:31:20 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef __linux__
#include <ctype.h>
#include <bsd/string.h>
#endif
#ifdef __APPLE__
#include <ctype.h>
#include <string.h>
#endif
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int r1;
	int r2;
	int r3;

	r1 = 'R';
	r2 = '4';
	r3 = 2;
	printf("isalpha\t\t'R': %d / '4': %d / 2: %d\n", isalpha(r1), isalpha(r2), isalpha(r3));
	printf("ft_isalpha\t'R': %d / '4': %d / 2: %d\n", ft_isalpha(r1), ft_isalpha(r2), ft_isalpha(r3));
	printf("isdigit\t\t'R': %d / '4': %d / 2: %d\n", isdigit(r1), isdigit(r2), isdigit(r3));
	printf("ft_isdigit\t'R': %d / '4': %d / 2: %d\n", ft_isdigit(r1), ft_isdigit(r2), ft_isdigit(r3));
	printf("isalnum\t\t'R': %d / '4': %d / 2: %d\n", isalnum(r1), isalnum(r2), isalnum(r3));
	printf("ft_isalnum\t'R': %d / '4': %d / 2: %d\n", ft_isalnum(r1), ft_isalnum(r2), ft_isalnum(r3));
	printf("isascii\t\t'R': %d / '4': %d / 2: %d\n", isascii(r1), isascii(r2), isascii(r3));
	printf("ft_isascii\t'R': %d / '4': %d / 2: %d\n", ft_isascii(r1), ft_isascii(r2), ft_isascii(r3));
	printf("isprint\t\t'R': %d / '4': %d / 2: %d\n", isprint(r1), isprint(r2), isprint(r3));
	printf("ft_isprint\t'R': %d / '4': %d / 2: %d\n", ft_isprint(r1), ft_isprint(r2), ft_isprint(r3));
	printf("toupper\t\t'R': %d / '4': %d / 2: %d\n", toupper(r1), toupper(r2), toupper(r3));
	printf("ft_toupper\t'R': %d / '4': %d / 2: %d\n", ft_toupper(r1), ft_toupper(r2), ft_toupper(r3));
	printf("tolower\t\t'R': %d / '4': %d / 2: %d\n", tolower(r1), tolower(r2), tolower(r3));
	printf("ft_tolower\t'R': %d / '4': %d / 2: %d\n", ft_tolower(r1), ft_tolower(r2), ft_tolower(r3));

	return 0;
}
