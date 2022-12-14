/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:22:22 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 05:22:24 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_isalnum(int c){
    return (ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0;
}
