#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char tab[] = "lolilol";
	char tab2[] = "HAHAHAHAlol";
	printf("%s\n%s\n", tab, tab2);
	ft_strupcase(tab);
	ft_strupcase(tab2);
	printf("%s\n%s\n", tab, tab2);
	return(0);
}
