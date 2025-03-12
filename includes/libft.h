/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:55:24 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/12 20:43:55 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_boolean.h"
# include "ft_def.h"
# include "ft_fprintf.h"
# include "ft_limits.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <stdlib.h>
# include <unistd.h>

/*
 *			bit manip
 */
unsigned char	ft_reverse_bits(unsigned char octet);
unsigned int	ft_reverse_octets(unsigned int octets);
unsigned char	ft_swap_bits(unsigned char octet);
unsigned int	ft_swap_octets(unsigned int octets);
void			ft_print_bits(unsigned char octet);
void			ft_print_octets(unsigned int octets);
//		booltab and array whit an int
void			bit_set(t_booltab *tab, unsigned int pos);
void			bit_clear(t_booltab *tab, unsigned int pos);
unsigned int	bit_get(t_booltab tab, unsigned int pos);
void			bit_toggle(t_booltab *tab, unsigned int pos);
void			ba_set(t_boolarray *arr, unsigned int pos);
void			ba_clear(t_boolarray *arr, unsigned int pos);
unsigned int	ba_get(t_boolarray arr, unsigned int pos);
void			ba_toggle(t_boolarray *arr, unsigned int pos);
t_boolarray		create_bool_array(unsigned int num_bits);
void			free_bool_array(t_boolarray *arr);
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
/*
 *			string verification
 */
int				ft_only_alnum(char *str);
int				ft_only_alpha(char *str);
int				ft_only_ascii(char *str);
int				ft_only_digit(char *str);
int				ft_only_print(char *str);
int				ft_only_whitespace(char *str);
/*
 *			string manip
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
