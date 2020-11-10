#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return(0);
	}
	return(1);
}

int	main(void)
{
	char *tab = "01234656789";
	char *tab2 = "0123fDt;021";
	char *tab3 = "";
	printf("%d\n", ft_str_is_numeric(tab));
	printf("%d\n", ft_str_is_numeric(tab2));
	printf("%d\n", ft_str_is_numeric(tab3));
	return(0);
}
