/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:12:25 by rde-lima          #+#    #+#             */
/*   Updated: 2021/06/03 20:17:07 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef		__linux__
# include	<bsd/string.h>
#endif
#ifdef		__APPLE__
# include	<string.h>
#endif
#include	<ctype.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"libft.h"

#define		ARR_SIZE	42

void	test_isalnum(void)
{
	unsigned char	c;
	static int		t[2];
	static int		f[2];

	c = -1;
	printf("\n\tTesting ft_isalnum() against isalnum() w/ ASCII characters\n");
	while (c++ < 127)
	{
		if (isalnum(c) == 0)
		{
			++f[0];
			if (ft_isalnum(c) == 0)
				++f[1];
		}
		if (isalnum(c) > 0)
		{
			++t[0];
			if (ft_isalnum(c) > 0)
				++t[1];
		}
	}
	if (t[0] != t[1] || f[0] != f[1])
		printf("\t❌ ft_isalnum is not OK\n");
	else
		printf("\t✅ ft_isalnum is OK\n");
}

void	test_isalpha(void)
{
	unsigned char	c;
	static int		t[2];
	static int		f[2];

	c = -1;
	printf("\n\tTesting ft_isalpha() against isalpha() w/ ASCII characters\n");
	while (c++ < 127)
	{
		if (isalpha(c) == 0)
		{
			++f[0];
			if (ft_isalpha(c) == 0)
				++f[1];
		}
		if (isalpha(c) > 0)
		{
			++t[0];
			if (ft_isalpha(c) > 0)
				++t[1];
		}
	}
	if (t[0] != t[1] || f[0] != f[1])
		printf("\t❌ ft_isalpha is not OK\n");
	else
		printf("\t✅ ft_isalpha is OK\n");
}

void	test_isdigit(void)
{
	unsigned char	c;
	static int		t[2];
	static int		f[2];

	c = -1;
	printf("\n\tTesting ft_isdigit() against isdigit() w/ ASCII characters\n");
	while (c++ < 127)
	{
		if (isdigit(c) == 0)
		{
			++f[0];
			if (ft_isdigit(c) == 0)
				++f[1];
		}
		if (isdigit(c) > 0)
		{
			++t[0];
			if (ft_isdigit(c) > 0)
				++t[1];
		}
	}
	if (t[0] != t[1] || f[0] != f[1])
		printf("\t❌ ft_isdigit is not OK\n");
	else
		printf("\t✅ ft_isdigit is OK\n");
}

void	test_isascii(void)
{
	unsigned char	c;
	static int		t[2];
	static int		f[2];

	c = -1;
	printf("\n\tTesting ft_isascii() against isascii() w/ ASCII characters\n");
	while (c++ < 127)
	{
		if (isascii(c) == 0)
		{
			++f[0];
			if (ft_isascii(c) == 0)
				++f[1];
		}
		if (isascii(c) > 0)
		{
			++t[0];
			if (ft_isascii(c) > 0)
				++t[1];
		}
	}
	if (t[0] != t[1] || f[0] != f[1])
		printf("\t❌ ft_isascii is not OK\n");
	else
		printf("\t✅ ft_isascii is OK\n");
}

void	test_isprint(void)
{
	unsigned char	c;
	static int		t[2];
	static int		f[2];

	c = -1;
	printf("\n\tTesting ft_isprint() against isprint() w/ ASCII characters\n");
	while (c++ < 127)
	{
		if (isprint(c) == 0)
		{
			++f[0];
			if (ft_isprint(c) == 0)
				++f[1];
		}
		if (isprint(c) > 0)
		{
			++t[0];
			if (ft_isprint(c) > 0)
				++t[1];
		}
	}
	if (t[0] != t[1] || f[0] != f[1])
		printf("\t❌ ft_isprint is not OK\n");
	else
		printf("\t✅ ft_isprint is OK\n");
}

void	test_tolower(void)
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];
	int		counter;

	printf("\n\tTesting ft_tolower() against tolower() w/ silly string\n");
	strcpy(str, "TUDO ISSO MINUSCULO -42");
	strcpy(temp, str);
	strcpy(ft_temp, str);
	counter = 0;
	while (str[counter] != '\0')
	{
		temp[counter] = tolower(temp[counter]);
		ft_temp[counter] = ft_tolower(ft_temp[counter]);
		++counter;
	}
	if (strcmp(temp, ft_temp) != 0)
	{
		printf("\t❌ ft_tolower is not OK\n");
		printf("\t%s\t-> tolower() ->\t%s\n", str, temp);
		printf("\t%s\t-> ft_tolower() ->\t%s\n", str, ft_temp);
	}
	else
		printf("\t✅ ft_lower is OK\n");
}

void	test_toupper(void)
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];
	int		counter;

	printf("\n\tTesting ft_toupper() against toupper() w/ silly string\n");
	strcpy(str, "tudo isso em maiusculo -42");
	strcpy(temp, str);
	strcpy(ft_temp, str);
	counter = 0;
	while (str[counter] != '\0')
	{
		temp[counter] = toupper(temp[counter]);
		ft_temp[counter] = ft_toupper(ft_temp[counter]);
		++counter;
	}
	if (strcmp(temp, ft_temp) != 0)
	{
		printf("\t❌ ft_upper is not OK\n");
		printf("\t%s\t-> toupper() ->\t%s\n", str, temp);
		printf("\t%s\t-> ft_toupper() ->\t%s\n", str, ft_temp);
	}
	else
		printf("\t✅ ft_upper is OK\n");
}

void	test_memset()
{
	char	*str;
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];

	printf("\n\tTesting ft_memset() against memset() w/ silly string\n");
	strcpy(str, "ghghghghghghghghghghgh");
	strcpy(temp, str);
	memset(temp, 'a', 13);
	strcpy(ft_temp, str);
	ft_memset(ft_temp, 'a', 13);
	if (memcmp(temp, ft_temp, 22) != 0)
	{
		printf("\t❌ ft_memset is not OK\n");
		printf("\n\tstr = \"%s\"\n", str);
		printf("\n\t(%p)str = \"%s\"\n", &temp, temp);
		printf("\tmemset(str, \'a\', 13)\n");
		printf("\t(%p)str = \"%s\"\n", &temp, temp);
		printf("\n\t(%p)str = \"%s\"\n", &ft_temp, ft_temp);
		printf("\tft_memset(str, \'a\', 13)\n");
		printf("\t(%p)str = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_memset is OK\n");
}

void	test_bzero()
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];

	printf("\n\tTesting ft_bzero() against bzero() w/ silly string\n");
	strcpy(str, "ghghghghghghghghghghgh");
	strcpy(temp, str);
	bzero(temp, 1);
	strcpy(ft_temp, str);
	ft_bzero(ft_temp, 1);
	if (memcmp(temp, ft_temp, 1) != 0)
	{
		printf("\t❌ ft_bzero is not OK\n");
		printf("\n\tstr = \"%s\"\n", str);
		printf("\n\t(%p)str = \"%s\"\n", &temp, temp);
		printf("\tbzero(str, 1)\n");
		printf("\t(%p)str = \"%s\"\n", &temp, temp);
		printf("\n\t(%p)str = \"%s\"\n", &ft_temp, ft_temp);
		printf("\tft_bzero(str, 1)\n");
		printf("\t(%p)str = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_bzero is OK\n");
}

void	test_memcpy(void)
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];

	printf("\n\tTesting ft_memcpy() against memcpy() w/ silly string\n");
	strcpy(str, "ghghghghghghghghghghgh");
	bzero(temp, ARR_SIZE);
	memcpy(temp, str, 5);
	ft_bzero(ft_temp, ARR_SIZE);
	ft_memcpy(ft_temp, str, 5);
	if (memcmp(temp, ft_temp, 5) != 0)
	{
		printf("\t❌ ft_memcpy is not OK\n");
		printf("\n\t(%p)str = \"%s\"\n", &str, str);
		printf("\n\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\tmemcpy(temp, str, 5)\n");
		printf("\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\n\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
		printf("\tft_memcpy(ft_temp, str, 5)\n");
		printf("\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_memcpy is OK\n");
}

void	test_memccpy(void)
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];

	printf("\n\tTesting ft_memccpy() against memccpy() w/ silly string\n");
	strcpy(str, "eu sou o máximo");
	bzero(temp, ARR_SIZE);
	memccpy(temp, str, 'o', 5);
	ft_bzero(ft_temp, ARR_SIZE);
	ft_memccpy(ft_temp, str, 'o', 5);
	if (memcmp(temp, ft_temp, 5) != 0)
	{
		printf("\t❌ ft_memccpy is not OK\n");
		printf("\n\t(%p)str = \"%s\"\n", &str, str);
		printf("\n\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\tmemccpy(temp, str, \'o\', 5)\n");
		printf("\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\n\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
		printf("\tft_memccpy(ft_temp, str, \'o\', 5)\n");
		printf("\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_memccpy is OK\n");
}

void	test_memmove(void)
{
	char	str[ARR_SIZE];
	char	temp[ARR_SIZE];
	char	ft_temp[ARR_SIZE];

	printf("\n\tTesting ft_memmove() against memmove() w/ silly string\n");
	strcpy(str, "eu sou o mariano");
	strcpy(temp, "eu fico, máximo");
	strcpy(ft_temp, "eu fico, máximo");
	memmove(temp, str, 8);
	ft_memmove(ft_temp, str, 8);
	if (memcmp(temp, ft_temp, 8) != 0)
	{
		printf("\t❌ ft_memmove is not OK\n");
		printf("\n\t(%p)str = \"%s\"\n", &str, str);
		printf("\n\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\tmemmove(temp, str, 8)\n");
		printf("\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\n\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
		printf("\tft_memmove(ft_temp, str, 8)\n");
		printf("\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_memmove is OK\n");
}

void	test_memchr(void)
{
	char	str[ARR_SIZE] = "qwertyuiop";
	char	*temp = memchr(str, 'u', 10);
	char	*ft_temp = ft_memchr(str, 'u', 10);

	printf("\n\tTesting ft_memchr() against memchr() w/ silly string\n");
	if (memcmp(temp, ft_temp, 10) != 0)
	{
		printf("\t❌ ft_memchr is not OK\n");
		printf("\n\t(%p)str = \"%s\"\n\n", &str, str);
		printf("\tmemchr(str, \'u\', 10)\n");
		printf("\t(%p)temp = \"%s\"\n", &temp, temp);
		printf("\tft_memchr(str, \'u\', 10)\n");
		printf("\t(%p)ft_temp = \"%s\"\n", &ft_temp, ft_temp);
	}
	else
		printf("\t✅ ft_memchr is OK\n");
}

void	test_memcmp(void)
{
	char		str1[ARR_SIZE];
	char		str2[ARR_SIZE];
	static int	r[5];
	static int	ft_r[5];

	printf("\n\tTesting ft_memcmp() against memcmp() w/ silly string\n");
	strcpy(str1, "abcdef");
	strcpy(str2, "zyxwvu");
	r[0] = memcmp(str1, str1, 6);
	r[1] = memcmp(str1, str2, 6);
	r[2] = memcmp(str2, str2, 6);
	r[3] = memcmp(str2, str1, 6);
	ft_r[0] = ft_memcmp(str1, str1, 6);
	ft_r[1] = ft_memcmp(str1, str2, 6);
	ft_r[2] = ft_memcmp(str2, str2, 6);
	ft_r[3] = ft_memcmp(str2, str1, 6);
	if ((r[0] != ft_r[0]) && (r[2] != ft_r[2]) && ((r[1] || ft_r[1]) == 0) && ((r[3] || ft_r[3]) == 0))
	{
		printf("\t❌ ft_memcmp is not OK\n");
		printf("\n\t(%p)str1 = \"%s\"\n", &str1, str1);
		printf("\t(%p)str2 = \"%s\"\n\n", &str2, str2);
		printf("\tmemcmp(str1, str1, 6) = %d\n", r[0]);
		printf("\tft_memcmp(str1, str1, 6) = %d\n", ft_r[0]);
		printf("\tmemcmp(str1, str2, 6) = %d\n", r[1]);
		printf("\tft_memcmp(str1, str2, 6) = %d\n", ft_r[1]);
		printf("\tmemcmp(str2, str2, 6) = %d\n", r[2]);
		printf("\tft_memcmp(str2, str2, 6) = %d\n", ft_r[2]);
		printf("\tmemcmp(str2, str1, 6) = %d\n", r[3]);
		printf("\tft_memcmp(str2, str1, 6) = %d\n", ft_r[3]);
	}
	else
		printf("\t✅ ft_memcmp is OK\n");
}

void	test_atoi

int	main(void)
{
	printf("\nTesting ASCII related functions:\n");
	test_isalnum();
	test_isalpha();
	test_isdigit();
	test_isascii();
	test_isprint();
	test_tolower();
	test_toupper();
	printf("\nTesting Memory related functions:\n");
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	return (0);
}
