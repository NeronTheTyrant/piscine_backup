#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return(0);
	}
	return(1);
}

int	main(void)
{
	char *tab = "AHAHAHAHAHAH";
	char *tab2 = "lolilol";
	char *tab3 = "loli12542AHA";
	char *tab4 = "";
	printf("%d\n", ft_str_is_lowercase(tab));
	printf("%d\n", ft_str_is_lowercase(tab2));
	printf("%d\n", ft_str_is_lowercase(tab3));
	printf("%d\n", ft_str_is_lowercase(tab4));
	return(0);
}
