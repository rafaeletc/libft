# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/06/01 04:07:49 by rde-lima         ###   ########.fr        #
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
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c
CFLAGS=	-Wall -Werror -Wextra -g
OBJ :=	$(SRC:%.c=%.o)

all: $(NAME)

$(OBJ): %.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

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

so:
	@$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	@gcc -nostartfiles -shared -o libft.so $(OBJ)

test:
	@$(CC) $(CFLAGS) ft_test.c -L. -lft -lbsd -lc -o test
	@echo "Compiled ft_test.c successfully!"

.PHONY: all clean fclean re so test
