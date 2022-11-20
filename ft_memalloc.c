/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:34:53 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 06:34:55 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memalloc(size_t size){
    void *area;

    area = (void*)malloc(size);
    area = ft_bzero(area, size);
    return area;
}
