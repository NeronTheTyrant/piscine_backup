#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (j < nb)
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
	char tab1[] = "Hello World!";
	char tab2[] = " I ";
	ft_strncat(tab1, tab2, 5);
	printf("%s\n", tab1);
	return(0);
}
