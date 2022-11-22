/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:11:09 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 14:11:11 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n){
    if (!dest || !src)  return NULL;
    
    int i;
    i = n;
    while (i > 0){
        ((char *)dest)[i] = ((char *)src)[i];
        i--;
    }
    return (dest);
}

