/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:18:23 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 14:18:25 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(void *str, int c, size_t n){
    int i;
    int j;
    void *ret;

    i = 0;
    while (((char *)str)[i] != '\0'){
        if (((char *)str)[i] == c)
            break;
        i++;
    }
    j = 0;
    ret = ft_memalloc(n - i);
    while (((char *)str)[i] != '\0'){
        ((char *)ret)[j] = ((char *)str)[i];
        j++;
        i++;   
    }
    return ret;
}
