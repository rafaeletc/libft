# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/07/10 16:17:48 by rde-lima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
SRC=	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_strteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
FLAGS =	-Wall -Werror -Wextra -g
OBJ :=	$(SRC:%.c=%.o)
CC =	clang

all: $(NAME)

$(OBJ): %.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "Compiled $(NAME) successfully!"

clean:
	@rm -rf $(OBJ)
	@echo "Clean done successfully!"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean done successfully!"

re: fclean all

.PHONY: all clean fclean re
