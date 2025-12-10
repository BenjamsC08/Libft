CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
OBJDIR = obj
SRCDIR = srcs
SRCC = bits/logic_gates.c bits/ft_swap_bits.c bits/ft_reverse_bits.c bits/ft_print_bits.c bits/bit_setters.c bits/bit_getters.c char/ft_isalnum.c char/ft_isalpha.c char/ft_isascii.c char/ft_ischarset.c char/ft_isdigit.c char/ft_ishex.c char/ft_isprint.c char/ft_iswhitespace.c char/ft_tolower.c char/ft_toupper.c garbage_coll/ft_gc.c gnl/get_next_line.c gnl/get_next_line_free.c gnl/get_next_line_utils.c integer/ft_1d_to_2d.c integer/ft_abs.c integer/ft_atoi.c integer/ft_atoi_base.c integer/ft_atol.c integer/ft_freetabint.c integer/ft_isprime.c integer/ft_min_max.c integer/ft_range.c integer/ft_rrange.c integer/ft_swap.c lists/ft_lstadd_back.c lists/ft_lstadd_front.c lists/ft_lstclear.c lists/ft_lstdelone.c lists/ft_lstfind_middle.c lists/ft_lstiter.c lists/ft_lstlast.c lists/ft_lstmap.c lists/ft_lstnew.c lists/ft_lstremove_if.c lists/ft_lstsize.c memory/ft_bzero.c memory/ft_calloc.c memory/ft_memchr.c memory/ft_memcmp.c memory/ft_memcpy.c memory/ft_memmove.c memory/ft_memset.c printf/ft_dprintf.c printf/ft_printf.c put/ft_putchar.c put/ft_putendl.c put/ft_puthex.c put/ft_putlong.c put/ft_putnbr.c put/ft_putptr.c put/ft_putstr.c put/ft_putuint.c sort/mergesort/lst_mergeSort.c sort/quicksort/ft_quicksort.c str/ft_lowerise.c str/ft_only_alnum.c str/ft_only_alpha.c str/ft_only_ascii.c str/ft_only_charset.c str/ft_only_digit.c str/ft_only_print.c str/ft_only_whitespace.c str/ft_onlyhex.c str/ft_remove_charset.c str/ft_remove_substring.c str/ft_str_add_char.c str/ft_str_cut.c str/ft_strcasestr.c str/ft_strchr.c str/ft_strdup.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_strncmp.c str/ft_strndup.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strrev.c str/ft_strstr.c str/ft_strtrim.c str/ft_substr.c strs/ft_free_strs.c strs/ft_print_strs.c strs/ft_split.c strs/ft_strsdup.c strs/ft_strsjoin.c strs/ft_strslen.c strs/ft_unsplit.c to_ascii/ft_intlen.c to_ascii/ft_itoa.c to_ascii/ft_ltoa.c to_ascii/ft_utoa.c to_ascii/ft_xlen.c to_ascii/ft_xtoa.c
OBJ = $(addprefix $(OBJDIR)/,$(SRCC:.c=.o))
NAME = libft.a
INCLUDE = includes/
VALID = \033[1;32m
NOTVALID = \033[1;31m
INFOS = \033[1;36m
LOADING = \033[1;33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@printf "\n$(VALID) - libft: compilation succeed \t✅\n$(RESET)"
	@echo "$(INFOS)Flags:$(CFLAGS)\ninclude:$(INCLUDE)\nObj:$(OBJ)\nlib:$(NAME)$(RESET)\n"
	@ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	@printf "\r$(LOADING) - libft: compilation \t\t🔃$(RESET)"
	@$(CC) $(CFLAGS) -I$(INCLUDE) -MMD -c $< -o $@

clean:
	@rm -rf $(OBJ) $(OBJ:.o=.d)
	@echo "$(LOADING) - libft: clean \t\t🆑$(RESET)"

fclean: clean
	@rm -rf $(OBJDIR) .cache
	@rm -f $(NAME) compile_commands.json
	@echo "$(NOTVALID) - libft: fclean \t\t🆑$(RESET)"

re: fclean all

listC:
	@LIST=$$(find -wholename "./$(SRCDIR)/*.c" | sed 's|$(SRCDIR)/||' | cut -c 3- | tr '\n' ' '); \
	printf "🗅 $(INFOS)copy all C sources files into clipboard :\n$(RESET)$$LIST\n"; \
	echo $$LIST | xclip -selection clipboard

listNb:
	@echo "Number of .c files :"
	@find -wholename "./$(SRCDIR)/*.c" | wc -l

.PHONY: all clean fclean re listC listNb

-include $(OBJ:.o=.d)
