/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:35:47 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/23 18:03:26 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// Função para calcular o tamanho da string necessária para representar o número
static int n_size(long int n) {

    int i = 0;

    if (n <= 0) {
        i++; // Contar o sinal negativo ou zero
        if (n == 0) return 1; // Se n é 0, só precisamos de 1 dígito
        n *= -1; // Tornar n positivo
    }

    while (n > 0) {
        n /= 10; // Dividir por 10 para contar os dígitos
        i++;
    }
    return i; // Retorna o número de dígitos
}


char	*ft_itoa(int n)
{
	char	*s;
	int	size;
	long int	number;

	number = (long int) n;
	size = n_size(number);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	s[size] = '\0';
	if (number == 0)
		*s = '0';
	if (number < 0)
	{
		s[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		s[size - 1] = number % 10 + 48;
		number = number / 10;
		size--;
	}

	return (s);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-42));
	return(0);
}*/
