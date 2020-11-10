#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return(dest);
}

int	main(void)
{
	char tab[] = "Hello World!";
	char tab2[] = " I am Martino";
	ft_strcat(tab, tab2);
	printf("%s\n", tab);
	return(0);
}
