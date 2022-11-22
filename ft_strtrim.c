/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:53:21 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 21:53:22 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int getTrimedLength(char *s){
    int first;
    int last;

    first = 0;
    while (first < ft_strlen(s) && ft_iswhitespace(s[first]))
        first++;
    last = ft_strlen(s) - 1;
    while (last > 0 && ft_iswhitespace(s[last]))
        last--;
    return last - first + 1;
}

char *ft_strtrim(char const *s){
    char *ret = ft_strnew(getTrimedLength((char *)s));
    int start;

    start = 0;
    while (ft_iswhitespace(s[start]))
        start++;
    ret = ft_strsub(s, start, getTrimedLength((char *)s));
    return ret; 
}
