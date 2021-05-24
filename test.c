/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:12:25 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/23 23:03:29 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef	__linux__
# include	<stdlib.h>
# include	<ctype.h>
# include	<bsd/string.h>
#endif
#ifdef	__APPLE__
# include	<stdlib.h>
# include	<ctype.h>
# include	<string.h>
#endif
#include	<stdio.h>
#include	"libft.h"

int	test_ascii(void)
{
	int r1 = 'R';
	int r2 = '4';
	int r3 = 2;

	printf("isalpha\t\t'R': %d '4': %d 2: %d\n",
		isalpha(r1), isalpha(r2), isalpha(r3));
	printf("ft_isalpha\t'R': %d '4': %d 2: %d\n\n",
		ft_isalpha(r1), ft_isalpha(r2), ft_isalpha(r3));
	printf("isdigit\t\t'R': %d '4': %d 2: %d\n",
		isdigit(r1), isdigit(r2), isdigit(r3));
	printf("ft_isdigit\t'R': %d '4': %d 2: %d\n\n",
		ft_isdigit(r1), ft_isdigit(r2), ft_isdigit(r3));
	printf("isalnum\t\t'R': %d '4': %d 2: %d\n",
		isalnum(r1), isalnum(r2), isalnum(r3));
	printf("ft_isalnum\t'R': %d '4': %d 2: %d\n\n",
		ft_isalnum(r1), ft_isalnum(r2), ft_isalnum(r3));
	printf("isascii\t\t'R': %d '4': %d 2: %d\n",
		isascii(r1), isascii(r2), isascii(r3));
	printf("ft_isascii\t'R': %d '4': %d 2: %d\n\n",
		ft_isascii(r1), ft_isascii(r2), ft_isascii(r3));
	printf("isprint\t\t'R': %d '4': %d 2: %d\n",
		isprint(r1), isprint(r2), isprint(r3));
	printf("ft_isprint\t'R': %d '4': %d 2: %d\n\n",
		ft_isprint(r1), ft_isprint(r2), ft_isprint(r3));
	printf("toupper\t\t'R': %d '4': %d 2: %d\n",
		toupper(r1), toupper(r2), toupper(r3));
	printf("ft_toupper\t'R': %d '4': %d 2: %d\n\n",
		ft_toupper(r1), ft_toupper(r2), ft_toupper(r3));
	printf("tolower\t\t'R': %d '4': %d 2: %d\n",
		tolower(r1), tolower(r2), tolower(r3));
	printf("ft_tolower\t'R': %d '4': %d 2: %d\n\n",
		ft_tolower(r1), ft_tolower(r2), ft_tolower(r3));
	return (0);
}

int	test_string(void)
{
	char src[5] = "amor";
	char dst[5] = "casa";
	int s;

	printf("strlen(%s) = %ld\n", src, strlen(src));
	printf("strlen(%s) = %ld\n\n", dst, strlen(dst));
	printf("ft_strlen(%s) = %d\n", src, ft_strlen(src));
	printf("ft_strlen(%s) = %d\n\n", dst, ft_strlen(dst));

	s = 0;
	while (++s <= 5)
	{
		char s1[strlen(src)];
		char s2[strlen(dst)];
		char ft_s1[ft_strlen(src)];
		char ft_s2[ft_strlen(dst)];

		printf("strlcpy(%s, %s, %d) = %ld\n", s1, src, s, strlcpy(s1, src, s));
		printf("ft_strlcpy(%s, %s, %d) = %d\n\n", ft_s1, src, s, ft_strlcpy(ft_s1, src, s));
		printf("strlcpy(%s, %s, %d) = %ld\n", s2, dst, s, strlcpy(s2, dst, s));
		printf("ft_strlcpy(%s, %s, %d) = %d\n\n", ft_s2, dst, s, ft_strlcpy(ft_s2, dst, s));
	}

	s = -1;
	while (++s <= 9)
	{
		char s1[5] = "amor";
		char s2[9] = "casa";
		char ft_s1[5] = "amor";
		char ft_s2[9] = "casa";

		printf("strlcat(%s, %s, %d) = %ld\n", s2, s1, s, strlcat(s2, s1, s));
		printf("ft_strlcat(%s, %s, %d) = %d\n\n", ft_s2, ft_s1, s, ft_strlcat(ft_s2, ft_s1, s));
	}
	return (0);
}

int	main(void)
{
	printf("Testing ASCII related functions:\n");
	test_ascii();
	printf("Testing String related functions:\n");
	test_string();
	return (0);
}
