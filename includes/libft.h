/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:55:24 by benjamsc          #+#    #+#             */
/*   Updated: 2025/04/15 08:06:13 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_boolean.h"
# include "ft_def.h"
# include "ft_limits.h"
# include "get_next_line.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/*
 *			bit manip
 */
unsigned char	ft_reverse_bits(unsigned char octet);
unsigned int	ft_reverse_octets(unsigned int octets);
unsigned char	ft_swap_bits(unsigned char octet);
unsigned int	ft_swap_octets(unsigned int octets);
void			ft_print_bits(unsigned char octet);
void			ft_print_octets(unsigned int octets);
/*
 *			char verification
 */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_iswhitespace(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_ishex(char c);
int				ft_ischarset(char c, char *charset);
/*
 *			string verification
 */
int				ft_only_alnum(char *str);
int				ft_only_alpha(char *str);
int				ft_only_ascii(char *str);
int				ft_only_digit(char *str);
int				ft_only_print(char *str);
int				ft_only_whitespace(char *str);
int				ft_onlyhex(char *str);
int				ft_only_charset(char *str, const char *charset);
/*
 *			string manip ajouter strsiteri
 */
size_t			ft_strlen(const char *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t siz);
size_t			ft_strlcpy(char *dst, const char *src, size_t siz);
int				ft_atoi(const char *nptr);
double			ft_atol(const char *nptr);
char			*ft_strdup(const char *s);
char			*ft_strndup(const char *s, t_uint n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strfjoin(char *src, char *dest);
char			*ft_str_add_char(char *str, char c);
char			*ft_remove_charset(char *str, const char *charset);
char			*ft_remove_substring(char *str, const char *dest);
/*int				ft_count_words(char *str, char c);*/
char			*ft_itoa(int n);
char			*ft_utoa(unsigned int n);
char			*ft_xtoa(unsigned long nbr, char type);
char			*ft_ltoa(long int n);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strcasestr(char *str, char *to_find);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strrev(char *str);
char			*ft_cut(char from, char *str, int l);
/*
 *			tab string manip
 */
int				ft_strslen(char **strs);
char			**ft_strsdup(char **strs);
char			**ft_split(const char *str, char c);
char			*ft_unsplit(char **strs, char c);
char			*ft_unsplit_skip(char **strs, char c, int k);
void			free_strs(char **strs);
char			**ft_strsfadd(char **src, char *add);
char			**ft_strsfjoin(char **s1, char **s2);
void			print_strs(char **strs);
/*
 *			memory manip
 */
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
/*
 *			int verification
 */
int				ft_abs(int nb);
int				ft_isprime(int nb);
int				ft_next_prime(int nb);
int				ft_min(int nb1, int nb2);
int				ft_max(int nb1, int nb2);
/*
 *			int size
 */
int				ft_intlen(unsigned int nb, char type);
int				ft_lintlen(long unsigned int nb, char type);
int				ft_xlen(unsigned long nbr);
/*
 *			int tab manip
 */
int				*ft_range(int min, int max);
int				*ft_rrange(int start, int end);
int				*ft_mintab(int *tab, unsigned int size);
int				*ft_maxtab(int *tab, unsigned int size);
void			ft_swap(int *a, int *b);
void			ft_quicksort(int *tab, int length);
/*
 *			put func (return how much char was writen)
 */
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putendl(char *s);
int				ft_putnbr(int nb);
int				ft_putuint(unsigned int nb);
int				ft_puthex(unsigned int nbr, char type);
int				ft_putptr(unsigned long nbr);
int				ft_putlong(long int nb);

/*
 *			put in file descriptor or stream
 */
int				ft_putchar_fd(int fd, char c);
int				ft_putstr_fd(int fd, char *s);
int				ft_putendl_fd(int fd, char *s);
int				ft_putnbr_fd(int fd, int n);
int				ft_putuint_fd(int fd, unsigned int nb);
int				ft_puthex_fd(int fd, unsigned int nbr, char type);
int				ft_putptr_fd(int fd, unsigned long nbr);
int				ft_putlong_fd(int fd, long int nb);
/*
 *			FT_PRINTF et FT_DPRINTF
 */
int				ft_printf(const char *str, ...);
int				ft_dprintf(int fd, const char *str, ...);

/*
 *			list manip
 */
// simple list
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// void			ft_lstremove_if(t_list **head, void *ref, int (*cmp)());
t_list			*ft_lstfind_middle(t_list **head);
// double list
t_dlist			*ft_dlstnew(void *content);
int				ft_dlstsize(t_dlist *lst);
void			ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void			ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void			ft_dlstdelone(t_dlist *lst, void (*del)(void *));
t_dlist			*ft_dlstlast(t_dlist *lst);
void			ft_dlstclear(t_dlist **lst, void (*del)(void *));
t_dlist			*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *));
void			ft_dlstiter(t_dlist *lst, void (*f)(void *));
// void			ft_dlstremove_if(t_dlist **head, void *ref, int (*cmp)());
t_dlist			*ft_dlstfind_middle(t_dlist **head);

/*
 *			Garbage Collector
*/
t_gc	*init_gc();
void	*ft_gcalloc(t_gc **head, t_uint size);
void	*ft_gc_addnode(t_dlist **head, void *ptr);
void	ft_clear_gc(t_gc **head);

#endif
