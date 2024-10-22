/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:52:25 by rdos-san          #+#    #+#             */
/*   Updated: 2024/10/21 22:38:28 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//to use malloc is necessary to include stdlib.h because i declared the malloc library in the header file
#include "libft.h"

// this function is used to allocate memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
void	*ft_calloc(size_t nmemb, size_t size)
{
    //cria um ponteiro para void
    void    *mem;

    //se nmemb ou size for 0, retorna NULL
    //this code is not necessary because the malloc function knows how to handle this case
    //if (nmemb == 0 || size == 0)
    //    return NULL;
    //TODO: Verificar overflow de nmemb * size pq se a multiplicação for um número mt grande e
    //passar o limite do size_t vai dar problema
    //Aloca memória para um array de nmemb elementos de size bytes cada
    if (nmemb != 0 && size != 0)
	    if ((nmemb * size) / size != nmemb)
		    return (NULL);
    mem = malloc(nmemb * size);

    //se a memória não foi alocada, retorna NULL
    if (!mem)
        return (NULL);

    //seta a memória alocada para 0
    ft_bzero(mem, nmemb * size);
    return (mem);

}
