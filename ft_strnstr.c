#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

//If little is an empty string, big is returned; if little occurs nowhere in big, NULL is
//returned; otherwise a pointer to the first character of the first occurrence of little is
// returned.
char    *ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	//regra da função.. se não for caractere nulo nem nulo
	if (little[0] == '\0' || little == NULL)
		return ((char*)big);
	//Passa por todos os caracteres de big
	while (big[i] != '\0' && i < n)
	{
		j = 0;	
		//passa por todos os caracteres de little
		while(little[j] != '\0')
		{
			//Verifica se não são os mesmos caracteres, e sai do loop
			if (little[j] != big[i + j])
				break;
			//Se tiver no ultimo caractere de little, retorna o big na posição de little
			if (little[j + 1] == '\0')
				return((char *)big + i);
			//
			j++;
		}
		i++;
	}
	return(NULL);
}

int	main(void)
{
	const char *large = "For Bar Baz";
	const char *small = "Bar";
	char *ptr;

	ptr = ft_strnstr(large, small + 3, 4);
	printf("string: %s", ptr);
	return(0);
}
