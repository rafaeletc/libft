# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/05/24 15:11:57 by rde-lima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
SRC=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strncmp.c
CFLAGS=	-Wall -Werror -Wextra -g
OBJ :=	$(SRC:%.c=%.o)
CC=		gcc

all:	$(NAME)

$(OBJ): %.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compiled $(NAME) successfully!"

clean:
	@rm -rf $(OBJ)
	@echo "Clean done successfully!"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean done successfully!"

re: fclean all

.PHONY: all clean fclean re