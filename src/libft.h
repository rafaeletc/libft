/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:42:06 by rde-lima          #+#    #+#             */
/*   Updated: 2021/05/23 14:32:17 by rde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

unsigned int	ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
char			*ft_strnstr(const char *str, const char *to_find);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
