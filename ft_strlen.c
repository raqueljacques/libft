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
