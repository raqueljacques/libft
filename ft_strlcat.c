/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/22 02:27:49 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies up to n-1 characters from the string src to dest, null-terminating the result
size_t  ft_strlcat(char *dest, const char *src, size_t n){
	size_t i;
	size_t dest_len;

	i = 0;
	dest_len = ft_strlen(dest);

	if (dest_len > n)
	{
		return (dest_len + size);
	}
	if (n != 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (ft_strlen(dest));
}
