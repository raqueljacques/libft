/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:35:47 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 00:57:22 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Função para calcular o tamanho da string necessária para representar o número
static int n_size(int n) {
    int i = 0;

    if (n <= 0) {
        i++; // Contar o sinal negativo ou zero
        if (n == 0) return 1; // Se n é 0, só precisamos de 1 dígito
        n = -n; // Tornar n positivo
    }

    while (n != 0) {
        n /= 10; // Dividir por 10 para contar os dígitos
        i++;
    }
    return i; // Retorna o número de dígitos
}


char	*ft_itoa(int n)
{
	char	*s;
	long	size;

	size = n_size(n);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	if (n == 0)
		*s = '0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[size - 1] = n % 10 + 48;
		n = n / 10;
		n--;
	}

	return (s);
}
