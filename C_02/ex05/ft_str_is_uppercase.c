#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			++i;
		else
			return(0);
	}
	return(1);
}

int	main(void)
{
	char *tab = "lolilol";
	char *tab2 = "AHAHAHAHAH";
	char *tab3 = "ahahahaha325";
	char *tab4 = "";
	printf("%s\n", ft_str_is_uppercase(tab));
	printf("%s\n", ft_str_is_uppercase(tab2));
	printf("%s\n", ft_str_is_uppercase(tab3));
	printf("%s\n", ft_str_is_uppercase(tab4));
	return(0);
}
