/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:56:13 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/19 18:57:50 by rdos-san         ###   ########.fr       */
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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Verifica se o caractere está no set
int	is_in_set(char c, const char *set) {
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
	//Verifica se algum dos parâmetros é nulo
	if (!s1 || !set)
		return NULL;
	// indice do começo
	int start = 0;
	// Indice do final, por isso o tamanho - 1
	int end = ft_strlen(s1) - 1;

	// Encontra a posição do começo da string, ignorando caracteres do 'set'
	while (s1[start] && is_in_set(s1[start], set))
 		start++;

 	// Encontra a posição do final da string, ignorando caracteres do 'set'
	while (end >= start && is_in_set(s1[end], set))
 		end--;

 	// Calcula o comprimento da nova string + 1 pra contar o nullo
	int trimmed_len = end - start + 1;

	// Aloca memória para a nova string (com espaço para o terminador nulo)
	char	*trimmed_str = (char *)malloc(trimmed_len + 1);
	if (!trimmed_str)  // Verificação de erro na alocação
		return NULL;

    // Copia a parte "trimada" da string original
    strncpy(trimmed_str, s1 + start, trimmed_len);
    trimmed_str[trimmed_len] = '\0';  // Adiciona o terminador nulo

    return trimmed_str;
}

int main() {
    char s1[] = "  --Hello, World!--  ";
    char set[] = " -";

    char *trimmed = ft_strtrim(s1, set);

    if (trimmed) {
        printf("Original: '%s'\n", s1);
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed);  // Liberar a memória alocada
    } else {
        printf("Falha ao alocar memória.\n");
    }

    return 0;
}

