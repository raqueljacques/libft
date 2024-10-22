/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:29:27 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/21 21:05:22 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//O que seria um ponteiro void?
//como pode um int c receber um caractere?

//The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	//char	*s;
//Pq criar um ponteiro para receber o valor do int ?
	//s = (char *)str;
	i = 0;
	while (i < n)
	{
		((char*)(str))[i] = c;
		i++;
	}
	return(str);
}
