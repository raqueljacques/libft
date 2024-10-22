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

static int	n_size(int n)
{
	int	i;
	
	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
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
