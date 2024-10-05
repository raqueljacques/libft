#include <stdio.h>


//If little is an empty string, big is returned; if little occurs nowhere in big, NULL is
//returned; otherwise a pointer to the first character of the first occurrence of little is
// returned.
char    *ft_strnstr(const char *big, const char *little, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (little[i] != '\0' && n > 0)
	{
		if (little[i] == big[j])
		{
			i++;
		}
		j++;
		n--;
	}
	if (i == ft_strlen(little)
	{

	}

}

int	main(void)
{
	const char *large = "Foo Bar Baz";
	const char *small = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("string: %s", ptr);
	return(0);
}
