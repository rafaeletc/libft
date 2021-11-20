/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:58:14 by rde-lima          #+#    #+#             */
/*   Updated: 2021/11/20 20:58:50 by rde-lima         ###   ########.fr       */
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
#include	"../libft.h"

#define ARR_SIZE 42
