/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:26:57 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/19 18:40:27 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//Cria uma substring a partir de uma string a partir do começo e do tamanho definido
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	// se a s n existir?
	//E se o len for maior do que o tamanho da string passada como parâmetro ?
	char	*str;
	size_t	i;
	size_t	len_s;

	i = 0;
	//Para usar o start com os outros números precisa passá-lo para size_t?
	//TODO:VERIFICAR ESSA REGRA!!
	len_s = ft_strlen(s);
	if ((start + len) > len_s)
		len = len_s - start;
	if (start > len-s)
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start + i];
	      	i++;
		len--;	
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;
	str = "amendoim";

	printf("%s", ft_substr(str, 2, 3));
	return (0);
}
