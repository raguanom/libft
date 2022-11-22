/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:00:15 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 21:00:17 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2){
    if (ft_strlen((char *)s1) != ft_strlen((char *)s2))
        return 0;
    int i;

    i = 0;
    while (i < ft_strlen((char *)s1)){
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
