/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:53:29 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 20:53:31 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char)){
    char *ret;

    if (s != NULL && f != NULL){
        ret = ft_strnew(ft_strlen(s));
        while (*s && *ret){
            ret = f(s);
            ret++;
            s++;
        }
        return ret;
    }
    return NULL;
}
