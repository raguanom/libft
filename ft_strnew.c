/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:18:25 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 13:18:26 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size){
    char *newStr;

    if (!(newStr = (char *)malloc(size * sizeof(char) + 1))) 
        return NULL;
    newStr[size] = '\0';
    return newStr;
}
