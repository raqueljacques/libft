/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/25 19:07:21 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies up to n-1 characters from the string src to dest, null-terminating the result
size_t  ft_strlcpy(char *dest, const char *src, size_t n){
    size_t i;

    i = 0;
    //n is the size of the destination buffer, if n is 0 returns the length of the source string
    if (n != 0)
    {
        //why n - 1? because the last character of the string is the null character and n is the size of the destination buffer
        while (src[i] != '\0' && i < n - 1)
        {
            //dest[i] receives src[i]
            dest[i] = src[i];
            i++;
        }
        //put a null character in the end of the string
        dest[i] = '\0';
    }
    return (ft_strlen(src));
}
