/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:52:58 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/19 20:02:56 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s1: The prefix string.
s2: The suffix string. 

The new string.
NULL if the allocation fails.

malloc

Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    //Soma dos caracteres das duas strings
	len = ft_strlen(s1) + ft_strlen(s2);
    //Reserva memoria para as duas strings e o /0
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    return (str);
}
