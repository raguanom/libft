/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:27:06 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 16:27:08 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *str){
    char *ch;
    int i;

    ch = ft_strnew(ft_strlen(str));
    i = 0;
    while (i < ft_strlen(str)){
        ch[i] = str[i];
        i++;
    }
    return ch;
}
