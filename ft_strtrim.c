/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:56:13 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/21 22:43:01 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 s1: The string to be trimmed.
set: The reference set of characters to trim.

The trimmed string.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.

*/

#include "libft.h"
#include <stdio.h>
// Verifica se o caractere está no set
static int	is_in_set(char c, const char *set) {
	// Enquanto set existir
	while (*set) {
		// Verifica se o caractere é o valor da posição de set
		if (c == *set)
			// Retorna 'verdadeiro'
			return 1;
	// Muda a posição do caractere do set
		set++;
	}
	// Se não encontrar ninguém retorna 'falso'
	return 0;
}

// TODO: O que acontece se a string começar com espaço?
// TODO: O set tem que ser uma sequência?
char	*ft_strtrim(char const *s1, char const *set) {
	// indice do começo
	size_t	start;
	// Indice do final, por isso o tamanho - 1
	size_t	end;
	
	start = 0;
	//Verifica se algum dos parâmetros é nulo
	if (!s1 || !set)
		return NULL;
	// Encontra a posição do começo da string, ignorando caracteres do 'set'
	while (*s1 && is_in_set(*s1, set))
 		s1++;
 		
	end = ft_strlen(s1);
 	// Encontra a posição do final da string, ignorando caracteres do 'set'
	// > 0 pq end é a posição do ultimo char
	while (end && is_in_set(s1[end - 1], set))
 		end--;
 		
 	return (ft_substr(s1, 0, end));
}


