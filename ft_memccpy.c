/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:02:57 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 14:02:59 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, void *src, int c, size_t n){
    if (!dest || !src)  return NULL;
    if (dest == src) return NULL;
    
    int i;
    i = n;
    while (i > 0){
        ((char *)dest)[i] = ((char *)src)[i];
        if (((char*)dest)[i] == c)
            break;
        i--;
    }
    return (dest);
}
