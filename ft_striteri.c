/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:49:37 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 20:49:39 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *)){
    int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
