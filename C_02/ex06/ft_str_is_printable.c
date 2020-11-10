#include <stdio.h>
#include <ctype.h>

int	ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return(0);
	}
	return(1);
}



int	main(void)
{
	char *tab = "123554dfsdfhd";
	char *tab2 = "FUCK THIS SHIT I'M OUT";
	char *tab3 = "\x1\x5\xa\x15 Hello";
	char *tab4 = "Hello \x1";
	printf("%d ", ft_str_is_printable(tab));
	printf("%d ", ft_str_is_printable(tab2));
	printf("%d ", ft_str_is_printable(tab3));
	printf("%d ", ft_str_is_printable(tab4));
	return(0);
}
