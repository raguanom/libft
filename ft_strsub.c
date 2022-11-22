/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:22:17 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 21:22:20 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len){
    char *ret = ft_strnew(ft_strlen((char *)s));
    int i;

    i = 0;
    while (i < len){
        ret[i] = s[start];
        start++;
        i++;
    }
    return ret;
}
