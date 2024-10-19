/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/25 19:07:21 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//returns a pointer to the last occurrence of the character c in the string s
char	*ft_strrchr(const char *s, int c)
{
    int i;

    //ft_strlen returns the length of the string
    i = ft_strlen(s);
    //while s[i] is not the end of the string and s[i] is not equal to c
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "string";
    char *ptr;

    ptr = ft_strrchr(str, 'r');
    printf("%s", ptr);
    return(0);
}