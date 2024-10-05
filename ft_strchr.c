/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/25 19:07:21 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//returns a pointer to the first occurrence of the character c in the string s
char	*ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    //while s[i] is not the end of the string and s[i] is not equal to c
    while (s[i] != '\0' && s[i] != c)
        i++;
    if (s[i] == c)
    //
        return ((char *)&s[i]);
    // difference between &s and *s and s
    // *s is the value of the pointer
    // s is the address of the pointer
    // &s is the address of the pointer
    return (NULL);
}

int main(void)
{
    char str[] = "string";
    char *ptr;

    ptr = ft_strchr(str, 'r');
    printf("%s", ptr);
    return(0);
}