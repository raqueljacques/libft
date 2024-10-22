/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 02:38:55 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 03:32:01 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	//Se for o menor número negativo precisa imprimir na mão pq não da pra deixar ele positivo
	//para fazer as continhas para conversão
	if (n == -2147483648)
	{
		//printa a string
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	// Se o número for negativo
	if (n < 0)
	{
		// Printa o char de negativo
		ft_putchar_fd('-', fd);
		// Passa o número para positivo para fazer as divisões
		n *= -1;
	}
	// Se n tiver duas casas decimais, será feita recursão da função até o ultimo caso que não
	// satisfaça a função
	if (n > 9)
	{
		// Recursão
		ft_putnbr_fd(n / 10, fd);
		// Printa o número convertido para char
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		//printa o numero convertido para char
		ft_putchar_fd(n + '0', fd);
}
