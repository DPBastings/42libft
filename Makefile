# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: dbasting <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 15:45:11 by dbasting      #+#    #+#                  #
#    Updated: 2023/09/11 14:50:58 by dbasting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SRC_FILES	:= ft_ctype/ft_isalnum.c\
			ft_ctype/ft_isalpha.c\
			ft_ctype/ft_isascii.c\
			ft_ctype/ft_isdigit.c\
			ft_ctype/ft_isprint.c\
			ft_ctype/ft_isspace.c\
			ft_ctype/ft_tolower.c\
			ft_ctype/ft_toupper.c\
			\
			ft_hash/ft_hash.c\
			ft_hash/hashtable.c\
			ft_hash/hashtable_pop.c\
			ft_hash/hashtable_search.c\
			ft_hash/hashtable_update.c\
			\
			ft_list/list_append.c\
			ft_list/list_clear.c\
			ft_list/list_delete.c\
			ft_list/list_iter.c \
			ft_list/list_last.c\
			ft_list/list_map.c\
			ft_list/list_new.c\
			ft_list/list_push.c\
			ft_list/list_size.c\
			\
			ft_stdio/gnl.c\
			ft_stdio/gnl_utils.c\
			ft_stdio/gnl_utils_buffer.c\
			ft_stdio/ft_putchar.c\
			ft_stdio/ft_putendl.c\
			ft_stdio/ft_putnbr.c\
			ft_stdio/ft_putstr.c\
			ft_stdio/ft_printf.c\
			ft_stdio/printf_carriage.c\
			ft_stdio/printf_padding.c\
			ft_stdio/printf_parser.c\
			ft_stdio/printf_parser_conversion.c\
			ft_stdio/printf_printchr.c\
			ft_stdio/printf_printdec.c\
			ft_stdio/printf_printhex.c\
			ft_stdio/printf_printlit.c\
			ft_stdio/printf_printoct.c\
			ft_stdio/printf_printstr.c\
			ft_stdio/printf_token.c\
			ft_stdio/printf_utils.c\
			\
			ft_stdlib/ft_atoi.c\
			ft_stdlib/ft_calloc.c\
			ft_stdlib/ft_itoa.c\
			\
			ft_string/ft_bzero.c\
			ft_string/ft_memchr.c\
			ft_string/ft_memcmp.c\
			ft_string/ft_memcpy.c\
			ft_string/ft_memmove.c\
			ft_string/ft_memset.c\
			ft_string/ft_split.c\
			ft_string/ft_strchr.c\
			ft_string/ft_strdup.c\
			ft_string/ft_striteri.c\
			ft_string/ft_strjoin.c\
			ft_string/ft_strlcat.c\
			ft_string/ft_strlcpy.c\
			ft_string/ft_strlen.c\
			ft_string/ft_strmapi.c\
			ft_string/ft_strncmp.c\
			ft_string/ft_strnstr.c\
			ft_string/ft_strrchr.c\
			ft_string/ft_strrev.c\
			ft_string/ft_strtrim.c\
			ft_string/ft_substr.c

OBJ_FILES	:= $(patsubst %.c,%.o,$(SRC_FILES))
HDR_FILES	:= ft_stdio/libft_gnl.h\
			ft_stdio/libft_printf.h
INC_FILES	:= libft.h\
			ft_ctype.h\
			ft_hash.h\
			ft_list.h\
			ft_stdio.h\
			ft_stdlib.h\
			ft_string.h
SRC_DIR		:= ./source/
SRC_SUBDIRS	:= ft_ctype/\
			ft_hash/\
			ft_list/\
			ft_stdio/\
			ft_stdlib/\
			ft_string/
OBJ_DIR		:= ./object/
OBJ_SUBDIRS	:= $(SRC_SUBDIRS)
HDR_DIR		:= $(SRC_DIR)
INC_DIR		:= ./include/

CFLAGS		?= -Wall -Wextra -Werror -I$(INC_DIR)
AFLAGS		?= -rc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR),$(OBJ_FILES))
	@ar $(AFLAGS) $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(addprefix $(HDR_DIR),$(HDR_FILES)) $(addprefix $(INC_DIR),$(INC_FILES))
	@mkdir -p $(addprefix $(OBJ_DIR),$(OBJ_SUBDIRS))
	@$(CC) $(CFLAGS) $< -c -o $@

clean:
	@rm -f $(addprefix $(OBJ_DIR),$(OBJ_FILES))

fclean: clean
	@rm -f $(NAME)

re: fclean all
