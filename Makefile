# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/05/23 15:04:05 by rde-lima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
SRC=	src/ft_isalpha.c \
		src/ft_isdigit.c \
		src/ft_isalnum.c \
		src/ft_isascii.c \
		src/ft_isprint.c \
		src/ft_toupper.c \
		src/ft_tolower.c \
		src/ft_strlen.c \
		src/ft_strlcpy.c \
		src/ft_strlcat.c \
		src/ft_strnstr.c \
		src/ft_strncmp.c
CFLAGS=	-Wall -Werror -Wextra
SRCDIR=	src
OBJDIR=	obj
OBJ := $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
CC=		gcc

all:	$(NAME)

$(OBJ): $(OBJDIR)/%.o : $(SRCDIR)/%.c
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