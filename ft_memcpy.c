/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:01:19 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/18 19:49:24 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*memcpy(void *destination, const void *source, size_t num)
{
	size_t	c;
	char	*dest;
	char	*sou;

	c = 0;
	dest = (char *)destination;
	sou = (char *)source;
	while(c < num)
	{
		dest[c] = sou[c];
		c++;
	}
	return(destination);
}

int	main(void)
{
	char	*str1 = "string";
	char	str2[10];
	size_t	n = 3;

	printf("%s | %s \n", str2, str1);
	memcpy(str2, str1, n);
	printf("%s | %s \n", str2, str1);
	return(0);
}
