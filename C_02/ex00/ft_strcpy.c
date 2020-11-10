#include <stdio.h>//
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return dest;
}

int	main(void)
{
	char tab[] = "0123456789";
	ft_strcpy(tab, "lolilol");
	printf("tab = %s\n", tab);
	ft_strcpy(tab, "lol");
	printf("tab = %s\n", tab);
}
