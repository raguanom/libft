/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:53:00 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 15:53:02 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(void *str1, void *str2, size_t n){
    if ((size_t)ft_strlen((char*)str1) < n) return 0;
    if ((size_t)ft_strlen((char*)str2) < n) return 0;

    size_t i = 0;
    while (i < n){
        if (((char *)str1)[i] != ((char *)str2)[i])
            return 0;
        i++;
    }
    return 1;
}
