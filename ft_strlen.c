/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:01:19 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/20 17:00:59 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlen() function calculates the length of the string s, excluding the terminating null byte ('\0').

#include "libft.h"

size_t	ft_strlen(char const *string)
{
	size_t	i;
	
	i = 0;
	while (string[i])
		i++;
	return(i);
}

/*
int	main(void)
{
	char	string[] = "string";

	printf("%c: %d", string, ft_strlen(string);
	return(0);
}
*/
