#include <stdio.h> //
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		if (src[i] != 0)
			dest[i] = src[i];
		else
			dest[i] = 0;
		++i;
	}
	return dest;
}

int	main(void)
{
	char tab[6] = "01234";
	char tab2[6] = "012345";
	printf("%s\n", tab);
	strncpy(tab, tab2, 6);
	printf("%s\n", tab);
	strncpy(tab, "5", 3); 
	printf("%s\n", tab);
	return(0);
}
