/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:01:19 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/20 17:00:59 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The isprint() function tests for any printing character, including space (` ').  The value of the argument must be representable as an unsigned char or the value of EOF.
int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return(1);
	return(0);
}

/*
int	main(void)
{
	char	a = 1;
	char	b = 32;
	char	c = 127;

	printf("ft_isprint(%d): %d\n", a, ft_isprint(a));
	printf("ft_isprint(%d): %d\n", b, ft_isprint(b));
	printf("ft_isprint(%d): %d\n", c, ft_isprint(c));
}*/
