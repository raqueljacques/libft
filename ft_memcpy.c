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

//The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.
void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	c;
	char	*dest;
	char	*sou;
	
	if (!destination && !source)
		return (NULL);
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

