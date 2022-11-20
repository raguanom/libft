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

void *ft_memset(void *str, int c, size_t n);
void *ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memccpy(void *dest, void *src, int c, size_t n);
void *ft_memmove(void *dest, void *src, size_t n);
void *ft_memchr(void *str, int c, size_t n);
int ft_memcmp(void *str1, void *str2, size_t n);

int ft_strlen(char *str);
char *ft_strdup(char *str);
int ft_strcpy(char *dest, char *src);


// Part 2:
void * ft_memalloc(size_t size);
char * ft_strnew(size_t size);

# endif