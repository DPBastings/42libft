# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dbasting <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 15:45:11 by dbasting      #+#    #+#                  #
#    Updated: 2023/03/28 16:54:42 by dbasting      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SRC_FILES	:= ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_isspace.c\
			ft_tolower.c\
			ft_toupper.c\
			\
			list_append.c\
			list_clear.c\
			list_delete.c\
			list_iter.c \
			list_last.c\
			list_map.c\
			list_new.c\
			list_push.c\
			list_size.c\
			\
			ft_abs.c\
			ft_dblmax.c\
			ft_dblmin.c\
			ft_intmax.c\
			ft_intmin.c\
			ft_uintmax.c\
			ft_uintmin.c\
			\
			gnl.c\
			gnl_utils.c\
			gnl_utils_buffer.c\
			ft_putchar.c\
			ft_putendl.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_printf.c\
			printf_carriage.c\
			printf_padding.c\
			printf_parser.c\
			printf_parser_conversion.c\
			printf_printchr.c\
			printf_printdec.c\
			printf_printhex.c\
			printf_printlit.c\
			printf_printoct.c\
			printf_printstr.c\
			printf_token.c\
			printf_utils.c\
			\
			ft_atoi.c\
			ft_calloc.c\
			ft_itoa.c\
			\
			ft_bzero.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
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
			ft_strrev.c\
			ft_strtrim.c\
			ft_substr.c

OBJ_FILES	:= $(SRC_FILES:.c=.o)
HDR_FILES	:= libft_gnl.h\
			libft_printf.h
INC_FILES	:= libft.h\
			ft_ctype.h\
			ft_list.h\
			ft_math.h\
			ft_stdio.h\
			ft_stdlib.h\
			ft_string.h
SRC_DIR		:= ./source/
OBJ_DIR		:= ./object/
HDR_DIR		:= ./header/
INC_DIR		:= ./include/

CFLAGS		?= -Wall -Wextra -Werror -I$(HDR_DIR) -I$(INC_DIR)
AFLAGS		?= -rc

.PHONY: all clean fclean re

all: $(NAME)

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
