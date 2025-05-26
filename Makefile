CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
OBJ_DIR = OBJ
SRCC = srcs/lists/ft_lstadd_front.c srcs/lists/ft_lstnew.c srcs/lists/ft_lstiter.c srcs/lists/ft_lstdelone.c srcs/lists/ft_lstclear.c srcs/lists/ft_lstsize.c srcs/lists/ft_lstlast.c srcs/lists/ft_lstadd_back.c srcs/lists/ft_lstmap.c srcs/integer/ft_atol.c srcs/integer/ft_min_max.c srcs/integer/ft_isprime.c srcs/integer/ft_atoi.c srcs/integer/ft_range.c srcs/integer/ft_rrange.c srcs/integer/ft_abs.c srcs/memory/ft_memchr.c srcs/memory/ft_bzero.c srcs/memory/ft_memcpy.c srcs/memory/ft_memset.c srcs/memory/ft_calloc.c srcs/memory/ft_memmove.c srcs/memory/ft_memcmp.c srcs/bits/ft_print_bits.c srcs/bits/ft_reverse_bits.c srcs/bits/ft_swap_bits.c srcs/bool/ft_bool_array.c srcs/bool/ft_booltab_manip.c srcs/bool/ft_boolarray_manip.c srcs/to_ascii/ft_xlen.c srcs/to_ascii/ft_xtoa.c srcs/to_ascii/ft_itoa.c srcs/to_ascii/ft_utoa.c srcs/to_ascii/ft_ltoa.c srcs/to_ascii/ft_intlen.c srcs/strs/ft_split.c srcs/strs/ft_strslen.c srcs/strs/ft_strsjoin.c srcs/strs/ft_free_strs.c srcs/strs/ft_unsplit.c srcs/strs/ft_strsdup.c srcs/strs/ft_strstr.c srcs/strs/ft_print_strs.c srcs/char/ft_isprint.c srcs/char/ft_tolower.c srcs/char/ft_toupper.c srcs/char/ft_isdigit.c srcs/char/ft_isascii.c srcs/char/ft_isalpha.c srcs/char/ft_iswhitespace.c srcs/char/ft_isalnum.c srcs/str/ft_strrev.c srcs/str/ft_only_alnum.c srcs/str/ft_only_print.c srcs/str/ft_strlen.c srcs/str/ft_strtrim.c srcs/str/ft_strmapi.c srcs/str/ft_strjoin.c srcs/str/ft_strdup.c srcs/str/ft_substr.c srcs/str/ft_str_cut.c srcs/str/ft_strrchr.c srcs/str/ft_only_ascii.c srcs/str/ft_only_alpha.c srcs/str/ft_strnstr.c srcs/str/ft_strcasestr.c srcs/str/ft_strlcpy.c srcs/str/ft_strncmp.c srcs/str/ft_strlcat.c srcs/str/ft_strchr.c srcs/str/ft_striteri.c srcs/str/ft_only_whitespace.c srcs/str/ft_only_digit.c srcs/str/ft_str_add_char.c srcs/printf/ft_putnbr_pfd.c srcs/printf/ft_putnbr_pf.c srcs/printf/ft_fprintf.c srcs/printf/ft_putchar_pf.c srcs/printf/ft_putchar_pfd.c srcs/printf/ft_printf.c srcs/put/ft_putstr_fd.c srcs/put/ft_putchar_fd.c srcs/put/ft_putendl_fd.c srcs/put/ft_putnbr_fd.c srcs/gnl/get_next_line.c srcs/gnl/get_next_line_utils.c
OBJ = $(SRCC:srcs/%.c=$(OBJ_DIR)/%.o)
NAME = libft.a
INCLUDE = includes/

# Créer le dossier OBJ et ses sous-dossiers si nécessaire
$(shell mkdir -p $(OBJ_DIR) $(dir $(OBJ)))

all: $(NAME)
	@echo "\033[0;33m - libft: all \t\t\t✅"

$(NAME): $(OBJ)
	@printf "\n\033[0;35m - libft: compilation terminée \t✅\n"
	@ar rcs $@ $^

$(OBJ_DIR)/%.o: srcs/%.c $(INCLUDE)
	@printf "\r\033[0;35m - libft: compilation \t\t🔃 "
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@ > /dev/null 2>&1

clean:
	@rm -rf $(OBJ_DIR)/$(OBJ)
	@echo "\033[0;33m - libft: clean \t\t✅"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;33m - libft: fclean \t\t✅"

re: fclean all

cList:
	@find -wholename "./srcs/*.c" | cut -c 3- | tr '\n' ' '

nbC:
	@find -wholename "./srcs/*.c" | wc -l

.PHONY: all clean fclean re cList nbC
