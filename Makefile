# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-lima <rde-lima@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 21:42:30 by rde-lima          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/12/06 15:42:04 by rde-lima         ###   ########.fr        #
=======
#    Updated: 2022/05/26 16:00:37 by rde-lima         ###   ########.fr        #
>>>>>>> devel
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strdup.c \
ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
<<<<<<< HEAD
ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
=======
ft_putnbr_fd.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
>>>>>>> devel
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = clang
FLAGS =	-Wall -Werror -Wextra
INC = -Iinclude

<<<<<<< HEAD
CC =	gcc

FLAGS =	-Wall -Werror -Wextra
=======
SRC_DIR = src
OBJ_DIR = obj
OBJ	= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
BONUS_OBJ = $(addprefix $(OBJ_DIR)/, $(BONUS_SRC:.c=.o))
>>>>>>> devel

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compiled '$(NAME)' successfully!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

<<<<<<< HEAD
clean:
	rm -f $(OBJ)
	@echo "Clean done successfully!"
=======
$(OBJ): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling '$<' with flags: '$(FLAGS)'"
	@$(CC) $(FLAGS) $(INC) -c $< -o $@
	@echo "Compiled '$@' successfully!"

bonus: $(BONUS_OBJ)
	@ar rc $(NAME) $(BONUS_OBJ)
	@ranlib $(NAME)
	@echo "Compiled '$(NAME)' bonus successfully!"

$(BONUS_OBJ): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling '$<' with flags: '$(FLAGS)'"
	@$(CC) $(FLAGS) $(INC) -c $< -o $@
	@echo "Compiled '$@' successfully!"

clean:
	@rm -f $(OBJ)
	@rm -f $(BONUS_OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned '$(OBJ_DIR)' successfully!"
>>>>>>> devel

fclean: clean
	@rm -rf $(NAME)
	@echo "Cleaned '$(NAME)' successfully!"

re: fclean all

<<<<<<< HEAD
.PHONY: all clean fclean re
=======
debug: FLAGS += -fsanitize=address -fno-omit-frame-pointer -g3
debug: fclean all bonus

.PHONY: all bonus clean fclean re debug
>>>>>>> devel
