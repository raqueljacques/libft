/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:49 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/17 14:12:44 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	
	while(i < n)
	{
		printf("i: %zu/ n: %zu \n", i, n);
		str[i] = 0;
		i++;
	}
	printf("%s", str);
	return;
}

int	main(void)
{
	char	str[] = "string";
	
	ft_bzero(str, 2);
	return(0);
}
