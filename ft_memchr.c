/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/25 19:07:21 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// memchr function is used to search for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument s. 

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char char_to_find;
    unsigned char *str;
    size_t i;

    char_to_find = (unsigned char)c;
    str = (unsigned char *)s;
    i = 0;
    if (n == 0)
        return (NULL);
    //não pode ser <= pq começa a contagem com 0
    while(i < n)
    {
        if (str[i] == char_to_find)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}

