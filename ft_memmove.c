/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/25 19:07:21 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void * src, size_t n)
{
	int	c;
	char	*dst;
	char	*origin;
	//temp will be an array with n+1 positions to store the src
	char	temp[n + 1];

	if (!dest && !src)
		return (NULL);

	c = 0;
	//cast para char
	dst = (char *)dest;
	origin = (char *)src;

	//copy src to temp
	while ( c < n)
	{
		temp[c] = origin[c];
		c++;
	}
	temp[c] = '\0';
	
	c = 0;
	//copy temp to dst
	while (c < n)
	{
		dst[c] = temp[c]
		c++;
	}

	return(dest);	
}

int	main(void)
{
	char	str[] = "0123456789";

	memmove(str+5, str, 5);
	printf("%s \n", str); 
	return(0);
}
