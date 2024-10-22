/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 03:32:28 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 03:39:24 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	
	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while(s[i])
	{
		//Chama a função f mandando como parâmetro o indice atual e um ponteiro para
		//o caractere atual
		f(i, &s[i]);
		i++;
	}
}
