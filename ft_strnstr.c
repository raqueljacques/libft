/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:56:12 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/21 21:57:13 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//If little is an empty string, big is returned; if little occurs nowhere in big, NULL is
//returned; otherwise a pointer to the first character of the first occurrence of little is
// returned.
char    *ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	//regra da função.. se não for caractere nulo nem nulo
	if (little[0] == '\0' || little == NULL)
		return ((char*)big);
	//Passa por todos os caracteres de big
	while (big[i] != '\0' && i < n)
	{
		j = 0;	
		//passa por todos os caracteres de little
		while(little[j] != '\0' && i + j < n)
		{
			//Verifica se não são os mesmos caracteres, e sai do loop
			if (little[j] != big[i + j])
				break;
			//Se tiver no ultimo caractere de little, retorna o big na posição de little
			if (little[j + 1] == '\0')
				return((char *)big + i);
			//
			j++;
		}
		i++;
	}
	return(NULL);
}

