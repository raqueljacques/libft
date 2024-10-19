
// Reserva espaço de memória para uma copia de string
// o argumebti da funcao precisa terminae em /0
// Retorna um ponteiro para o espaco de armazenamento que contem
// a string copiada
char    *ft_strdup(char *src)
{
    //Variavel string que recebera o valor copiado
	char	*new_string;
    // contador de caracteres
	int	i;
    //inicializando a variável 
	i = 0;
    //Estrutura de repeticao para percorrer a string ate o final /0
	while(src[i])
        //contabiliza os caracteres
		i++;
    // malloca na nova string o espaço referente ao numero de bytes do tipo utilozado x a quantidade de caracteres
	new_string = (char *)malloc(sizeof(char) * i) + 1);
	//Se der erro na hora de mallocar vai retornar null
    if (new_string == NULL)
		return(NULL);
    //A variável que antes foi usada pro malloc agora vai ser o index
	i = 0;
    // percorre toda a string novamente 
	while(src[i])
	{
        //E pra cada posicao da nova string atribui o valor da original
		new_string[i] = src[i];
		i++;
	}
    //No ultimo caractere coloca um null para indicar o final da string
	new_string[i] = '\0';
    //retorna a string 
	return (new_string);
}
/*
int	main(void)
{
	char *string;
	string = " ";
	char	*result = ft_strdup(string);

	if (result != NULL)
	{
		printf("%s", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}*/
