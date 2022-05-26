# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
#    Updated: 2022/05/26 12:13:40 by rde-lima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strdup.c \
ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

FILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = clang
FLAGS =	-Wall -Werror -Wextra
INC = -Iinclude

SRC_DIR = src
OBJ_DIR = obj
SRC	= $(addprefix $(SRC_DIR)/, $(FILES))
OBJ	= $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
SRC_BONUS =	$(addprefix $(SRC_DIR)/, $(FILES_BONUS))
OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(FILES_BONUS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "Compiled '$(NAME)' successfully!"

$(OBJ_DIR):
	@mkdir -pv $(OBJ_DIR)
	@echo "compiling with flags: '$(FLAGS)'"

$(OBJ): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(FLAGS) $(INC) -c $< -o $@
	@echo "Compiled $< successfully!"

$(OBJ_BONUS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(FLAGS) $(INC) -c $< -o $@
	@echo "Compiled $< successfully!"

bonus: $(OBJ_BONUS)
	@ar rc $(NAME) $(OBJ_BONUS)
	@ranlib $(NAME)
	@echo "Compiled bonus '$(NAME)' successfully!"

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)
	rmdir --ignore-fail-on-non-empty $(OBJ_DIR)
	@echo "Cleaned '$(OBJ_DIR)' successfully!"

fclean: clean
	rm -rf $(NAME)
	@echo "Cleaned '$(NAME)' successfully!"

re: fclean all bonus

debug: FLAGS += -fno-omit-frame-pointer -g
debug: fclean all bonus

.PHONY: all bonus clean fclean re debug
