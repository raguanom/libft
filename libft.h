/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:34:16 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 03:34:19 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H


# include <unistd.h>
# include <stdlib.h>
# include <string.h>

// Part 1:

int ft_isupper(int c);
int ft_islower(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_tolower(int c);
int ft_toupper(int c);
int ft_iswhitespace(int c);

void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memccpy(void *dest, void *src, int c, size_t n);
void *ft_memmove(void *dest, void *src, size_t n);
void *ft_memchr(void *str, int c, size_t n);
int ft_memcmp(void *str1, void *str2, size_t n);

int ft_strlen(char *str);
char *ft_strdup(char *str);
char *ft_strcpy(char *dest, char *src);


// Part 2:
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);

char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const*s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
char *ft_itoa(int n);

# endif