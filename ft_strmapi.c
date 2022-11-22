/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:57:33 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 20:57:34 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    char *ret;
    int i;

    if (s != NULL && f != NULL){
        ret = ft_strnew(ft_strlen(s));
        i = 0;
        while (*s && *ret){
            ret = f(i, s);
            ret++;
            s++;
            i++;
        }
        return ret;
    }
    return NULL;
}
