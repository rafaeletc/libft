# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2021/11/16 14:23:59 by rde-lima         ###   ########.fr        #
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
BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CC =	clang
FLAGS =	-Wall -Werror -Wextra -g
OBJ :=	$(SRC:%.c=%.o)
OBJB :=	$(BONUS:%.c=%.o)

all: $(NAME)

$(OBJ): %.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compiled $(NAME) successfully!"

$(OBJB): %.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

bonus: $(OBJB) libft.h
	@ar rc $(NAME) $(OBJB)
	@ranlib $(NAME)
	@echo "Compiled bonus to $(NAME) successfully!"

clean:
	@rm -rf $(OBJ)
	@echo "Clean done successfully!"

bclean:
	@rm -rf $(OBJB)
	@echo "Bonus clean done successfully!"

fclean: clean
	@rm -f $(NAME)
	@echo "Full clean done successfully!"

re: fclean all

rebonus : bclean bonus

.PHONY: all bonus clean fclean re rebonus
