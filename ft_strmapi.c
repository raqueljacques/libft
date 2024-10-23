/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 03:40:24 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/23 18:08:23 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	len;
	int	i;
	char	*str;

	i = 0;
	// Guarda o tamanho da string para fazer o malloc da string alterada
	len = ft_strlen((char *)s);
	// Malloca o espaço necessário para retornar a string alterada
	str = (char *)malloc(sizeof(char) * (len + 1));
	//Se houver um problema com o malloc
	if (!str)
		return (NULL);
	// Enquanto a string existir
	while (s[i])
	{
		//Atribui a nova string o valor do resultado da função recebida
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
