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

// Função que conta a quantidade de palavras na string
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
		// Se estiver em uma palavra (não é o caractere separador)
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		// Se encontrar o separador, significa que saiu de uma palavra
		else if (s[i] == c)
		{
			is_word = 0;
		}
		i++;
	}
	return (count);
}

// Função para liberar memória alocada em caso de erro
static void	free_all(char **split, int index)
{
	while (index >= 0)
	{
		free(split[index]);
		index--;
	}
	free(split);
}

// Função auxiliar para alocar espaço e copiar as palavras
static char	*alloc_word(const char *str, int start, int end)
{
	char	*word;
	int		len;
	int		i;

	len = end - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i++] = str[start++];
	}
	word[i] = '\0';
	return (word);
}

// Função que coloca as palavras no array final
static int	put_words(const char *str, char c, char **split)
{
	int	i;
	int	start;
	int	word_index;

	i = 0;
	word_index = 0;
	while (str[i] != '\0')
	{
		// Encontra o início de uma palavra
		if (str[i] != c)
		{
			start = i;
			// Encontra o final da palavra
			while (str[i] != '\0' && str[i] != c)
				i++;
			// Aloca espaço e copia a palavra para o array
			split[word_index] = alloc_word(str, start, i);
			if (!split[word_index])
				return (0); // Erro ao alocar memória
			word_index++;
		}
		// Avança para o próximo caractere se for o separador
		else
			i++;
	}
	split[word_index] = NULL; // Adiciona NULL no final
	return (1); // Sucesso
}

// Função principal que divide a string
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	// Conta o número de palavras na string
	words = count_words(s, c);
	// Aloca espaço para o array de palavras
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	// Coloca as palavras no array
	if (!put_words(s, c, split))
	{
		free_all(split, words); // Libera a memória alocada se houver erro
		return (NULL);
	}
	return (split); // Retorna o array de strings
}
