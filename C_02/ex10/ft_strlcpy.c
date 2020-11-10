#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	i = 0;
	while (i < size - 1)
	{
		if (src[i] != 0)
		{
			dest[i] = src[i];
			++i;
		}
	}
	if (size > 0)
		dest[i] = 0;
	i = 0;
	while (src[i] != 0)
		++i;
	return(i);
}

int	main(void)
{
	char tab1[] = "lolilolilolilolilolilolilol";
	char tab2[] = "hahahahahahaaa";
	printf("The function tried to copy %d characters from %s to tab1. This is the result:\n%s\n", ft_strlcpy(tab1, tab2, 14), tab2, tab1);
	return(0);
}
