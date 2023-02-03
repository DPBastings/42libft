# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dbasting <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 15:45:11 by dbasting      #+#    #+#                  #
#    Updated: 2022/12/28 13:55:22 by dbasting      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRC_FILES := ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c \
	ft_lstlast.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstsize.c\
	ft_memchr.c\
	ft_memcmp.c\
   	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
   	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_striteri.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
   	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
   	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c\
	\
	gnl.c\
	gnl_utils.c\
	gnl_utils_buffer.c
OBJ_FILES := $(SRC_FILES:.c=.o)

SRC_DIR := ./source/
OBJ_DIR := ./object/
HDR_DIR := ./header/
INC_DIR := ./include/

CFLAGS ?= -Wall -Wextra -Werror -I$(HDR_DIR) -I$(INC_DIR)
AFLAGS ?= -rc

.PHONY: all bonus clean fclean re

all: $(NAME)

bonus: all
	@echo "Bonus is basis, vrind."

$(NAME): $(addprefix $(OBJ_DIR),$(OBJ_FILES))
	@ar $(AFLAGS) $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(addprefix $(HDR_DIR),$(HDR_FILES)) $(addprefix $(INC_DIR),$(INC_FILES))
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $< -c -o $@

clean:
	@rm -f $(OBJ_DIR)*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
