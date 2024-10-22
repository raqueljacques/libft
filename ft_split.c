/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:03:00 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 06:51:02 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	is_word;
	int	count;

	i = 0;
	is_word = 0;
	count = 0;

	while (s[i] != '\0')
	{
		// Se a posição atual for diferente do char e is word for falso
		// Significa que está em uma palavra
		if (s[i] != c && !is_word)
		{
			//Muda a flag para true
			is_word = 1;
			//Adiciona uma palavra na contagem
			count++;
		}
		//Se a posição atual for o char
		//Significa que achou um separador então is word volta a ser falso pois 
		//não está em uma palavra
		else if (s[i] == c)
		{
			//Muda flag pra false
			is_word = 0;
		}
		//Passa para o próximo caractere
		i++;

	}
	//Retorna o somatório de palavras;
	return (count);
}

// Duplicar a palavra de str, de start até finish (não inclusivo)
static char *word_dup(const char *str, int start, int finish) {
    // Calcula o tamanho da nova palavra
    int length = finish - start; 
    char *word = malloc((length + 1) * sizeof(char)); // Aloca memória para a nova palavra

    // Se a alocação falhar, retorna NULL
    if (!word) return NULL; 

    // Copia os caracteres da palavra da string original
    for (int i = 0; i < length; i++) {
        word[i] = str[start + i]; // Copia cada caractere
    }
    word[length] = '\0'; // Adiciona o terminador de string
    return word; // Retorna a nova palavra
}

// Libera a memória alocada para o array de palavras
static void free_all(char **split) {
    for (int i = 0; split[i] != NULL; i++) {
        free(split[i]); // Libera cada palavra
    }
    free(split); // Libera o array de palavras
}

static int	put_words(const char *str, char c, char **split)
{
	int	i;
	int	j;
	int	start;
	int	finish;
	
	i = 0; // Índice para percorrer a string
	j = 0; // Contador de palavras que estão sendo armazenadas
	start = -1; // Marca o início da palavra, começamos com -1

	// Percorre a string
	while (str[i] != '\0')
	{
		// Se o caractere não for c e start ainda não está definido.
		if (str[i] != c && start < 0)
		{
			start = i; // Define o início da nova palavra
		}
		// Se encontramos um separador ou chegamos ao fim da string
		else if ((str[i] == c || str[i + 1] == '\0') && start >= 0)
		{
			// Define o final da palavra
			finish = (str[i] == c) ? i : i + 1; 
			// Aqui, copiamos a palavra encontrada para o array de split
			split[j] = word_dup(str, start, finish); // word_dup deve ser definida para duplicar a palavra
			if (!split[j]) // Se a alocação falhar
			{
				// Libera a memória alocada até agora e retorna erro
				free_all(split); // Uma função que libera toda a memória
				return (0);
			}
			j++; // Incrementa o contador de palavras
			start = -1; // Reseta o início da próxima palavra
		}
		i++; // Passa para o próximo caractere
	}
	split[j] = NULL; // Marca o final do array de palavras
	return (1); // Sucesso
}


char	**ft_split(char const *s, char c)
{
	// Se não houver string, retorna NULL
	if (!s)
		return (NULL);

	char	**split; // Declara um ponteiro para armazenar as palavras
	int	words; // Para contar quantas palavras existem
	
	// Conta a quantidade de palavras para saber o tamanho do malloc
	words = count_words(s, c);
	// Aloca memória para um ponteiro de char para cada palavra, mais um para o NULL
	split = (char **)malloc(sizeof(char *) * (words + 1));
	// Se a alocação falhar, retorna NULL
	if (!split)
		return (NULL);
	
	// Tenta colocar as palavras no array
	if (!put_words(s, c, split))
	{
		free(split); // Libera a memória alocada se houver erro
		return (NULL);	
	}
	return (split); // Retorna o array de palavras
}

