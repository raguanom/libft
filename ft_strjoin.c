/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:30:56 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 21:30:57 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const*s2){
    int len;
    char *ret;
    int i;
    int j;

    len = ft_strlen((char *)s1) + strlen((char *)s2);
    ret = ft_strnew(len);
    i = 0;
    j = 0;
    while (i < ft_strlen((char *)s1)){
        ret[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (i < ft_strlen((char *)s2)){
        ret[j] = s2[i];
        i++;
        j++;
    }
    return ret;
}
