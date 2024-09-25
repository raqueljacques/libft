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

void	*memmove(void *destination, const void * source, size_t num)
{
	size_t c;
	char	*dest;
	char	*sou;
	char	*sourceCopy;

	c = 0;
	dest = (char *)destination;
        sou = (char *)source;

	sourceCopy = sou;
	//copy the value of source to another variable
	//ou vai ser um strcopy
	//while to put the source saved in the destination
	
}

int	main(void)
{
	char	str[] = "0123456789";

	memmove(str+5, str, 5);
	printf("%s \n", str); 
	return(0);
}
