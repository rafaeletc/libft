# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/11/22 03:36:37 by rde-lima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strdup.c \
ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_strteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

SRCB =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ :=	$(SRC:%.c=%.o)

OBJB :=	$(SRCB:%.c=%.o)

CC =	gcc

FLAGS =	-Wall -Werror -Wextra -g

all: $(NAME)

$(OBJ): %.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "Compiled mandatory $(NAME) successfully!"

$(OBJB): %.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

bonus: $(OBJB) libft.h
	ar rc $(NAME) $(OBJB)
	ranlib $(NAME)
	@echo "Compiled bonus $(NAME) successfully!"

clean:
	rm -f $(OBJ)
	@echo "Clean done successfully!"
	rm -f $(OBJB)
	@echo "Bonus clean done successfully!"

fclean: clean
	rm -rf $(NAME)
	@echo "Full clean done successfully!"

re: fclean all bonus

.PHONY: all bonus clean fclean re
