/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:01:19 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/20 17:00:59 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
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
	char	str[] = "start stop";
	char	*str1 = "string";
	char	str2[1];

	printf("--------------------------------\n");
	printf("%s \n", str);
	ft_memcpy(str, str + 6, 4 * sizeof(char));
	printf("%s \n", str);
	
	printf("--------------------------------\n");
	printf("%s \n", str2);
	ft_memcpy(str2, str1, 6);
	printf("%s \n", str2);

	return(0);
}
