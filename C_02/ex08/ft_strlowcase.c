#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char tab[] = "lolilolHAHA";
	char tab2[] = "HAHAHAHlol";
	ft_strlowcase(tab);
	ft_strlowcase(tab2);
	printf("%s\n%s\n", tab, tab2);
	return(0);
}
