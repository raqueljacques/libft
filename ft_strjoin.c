/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:52:58 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/19 20:02:56 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s1: The prefix string.
s2: The suffix string. 

The new string.
NULL if the allocation fails.

malloc

Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);


}
