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
