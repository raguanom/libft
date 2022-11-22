/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:13:07 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 21:13:10 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n){
    if (ft_strlen((char *)s1) < n) return 0; 
    if (ft_strlen((char *)s2) < n) return 0;
    int i;

    i = 0;
    while (i < n){
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
