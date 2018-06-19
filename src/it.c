char	change(char s)
{
	return (s + 1);
}

char	change_i(unsigned int i, char c)
{
	return (c - i);
}

void	it_test(char *c)
{
	*c = *c + 1;
}

void	iti_test(unsigned int i, char *c)
{
	*c = *c + i;
}