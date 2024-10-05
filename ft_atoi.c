/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:49 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/17 14:12:44 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//why use quotation marks??  not <>??
//Usamos "" para dizer ao computador que ele precisa procurar o arquivo dentro do diretorio do nosso projeto
//Ao utilizar maior e menor o compilador irá procurar este arquivo diretamente na pasta padrão do comilador como stio.h
# include "libft.h"

int	ft_atoi(const char *string)
{
	//recieve char 
	int	i;
	int	n;
	int	sign;

	sign = 1;
	i = 0;
	n = 0;
	//is digit funcion can recieve a char if is declared with a int?
	if (string[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (string[0] == '+')
	{
		sign = 1;
		i++;
	}
	while (string[i] != '\0' && ft_isdigit(string[i]))
	{
		n = n * 10;
		n = n + string[i] - '0';
		i++;
	}
	return(n * sign);

}

int	main()
{
	char strToConvert[] = "908475966"; 
  
	int ConvertedStr = ft_atoi(strToConvert); 
  
	printf("String to be Converted: %s\n", strToConvert); 
	printf("Converted to Integer: %d\n", ConvertedStr); 
  
	return 0; 
}
