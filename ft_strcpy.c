/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:30:21 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 06:30:23 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcpy(char *dest, char *src){
    if (!dest || !src) return NULL;
    
    int i;
    i = 0;
    while (i > 0){
        dest[i] = src[i];
        i--;
    }
    return (dest);

}
