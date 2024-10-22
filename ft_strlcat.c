/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 02:27:49 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies up to n-1 characters from the string src to dest, null-terminating the result
/*
size_t  ft_strlcat(char *dest, const char *src, size_t n){
	size_t i;
	size_t dest_len;

	i = 0;
	dest_len = ft_strlen(dest);

	if (dest_len > n)
	{
		return (dest_len + size);
	}
	if (n != 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (ft_strlen(dest));
}
*/

size_t ft_strlcat(char *dest, const char *src, size_t n) {
    size_t dest_len = ft_strlen(dest); // Comprimento atual de dest
    size_t src_len = ft_strlen(src);   // Comprimento de src

    // Se n é 0, não há espaço para concatenação, retorna comprimento de src + comprimento de dest
    if (n == 0) {
        return src_len; 
    }

    // Se dest_len é maior ou igual a n, não há espaço, então retorna n + comprimento de src
    if (dest_len >= n) {
        return n + src_len; 
    }

    // Calcula o espaço restante na dest após o comprimento atual
    size_t space_remaining = n - dest_len - 1; // -1 para o terminador de string

    // Copia src para dest enquanto houver espaço
    size_t i = 0;
    while (i < space_remaining && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Adiciona o terminador de string

    return dest_len + src_len; // Retorna o comprimento total da nova string
}
