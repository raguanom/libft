/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:56:06 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 05:56:08 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n){
    if (!dest || !src)  return NULL;
    if (dest == src) return NULL;
    
    int i;
    i = 0;
    while (i > 0){
        ((char *)dest)[i] = ((char *)src)[i];
        i--;
    }
    return (dest);
}
