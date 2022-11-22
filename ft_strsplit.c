/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randolph <just_a_fan_of_42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:48:05 by randolph          #+#    #+#             */
/*   Updated: 2022/11/20 22:48:08 by randolph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int ft_strlen(char *str){
    int len;

    len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

char *ft_strcpy(char *dest, char *src){
    if (!dest || !src) return NULL;
    
    int i;
    i = 0;
    while (src[i]){
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int getNumberOfWords(char *s, int delimiter){
    int count;
    int old_i;
    int i;

    i = 0;
    count = 0;
    old_i = 0;
    while (i < ft_strlen(s)){
        while (i < ft_strlen(s)){
            if (s[i] != delimiter)
                break;
            i++;
        }
        old_i = i;
        while (i < ft_strlen(s)){
            if (s[i] == delimiter)
                break;
            i++;
        }
        if (i > old_i) count += 1;
    }
    return count;
}

char **ft_strsplit(char const *s, char c){
    char buffer[16384];
    int index, i, new_string_size, count;
    char **ret;

    index = 0;
    i = 0;
    count = getNumberOfWords((char *)s,c);
    ret = malloc(sizeof(char *) * count);
    while (i < ft_strlen((char *)s)){
        while (i < ft_strlen((char *)s)){
            if (s[i] != c)
                break;
            i++;
        }
        new_string_size = 0;
        while (i < ft_strlen((char *)s)){
            if (s[i] == c)
                break;
            buffer[new_string_size] = s[i];
            i++;
            new_string_size++;
        }
        if (new_string_size > 0){
            buffer[new_string_size] = '\0';
            ret[index] = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
            ft_strcpy(ret[index], buffer);
            index++;
        }
    }
    return ret;
}

int main(){
    // Testing 3 scenrios to make strsplit work:
    // I can get number of words in a string (multiple substrings):s
    printf("Number of words should be 3, number of words are: %d\n", getNumberOfWords("    Randolph Osarumwense Aguanomwan  ", ' '));
    printf("Number of words should be 3, number of words are: %d\n", getNumberOfWords("*hello*fellow***students*", '*'));

    char **test_array = ft_strsplit("    Randolph Osarumwense Aguanomwan  ", ' ');
    int NumberOfWords = getNumberOfWords("    Randolph Osarumwense Aguanomwan  ", ' ');
    for (int i = 0; i < NumberOfWords; i++){
        int index = i + 1;
        printf("Index: %d\nString at Index %d\n: %s\n\n", index, index, test_array[i]);
    }
    return 0;
}
