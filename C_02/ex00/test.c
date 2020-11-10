#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *start = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return start;
}

int	main(void)
{
	char tab[] = "Greece";
	printf("%s\n", tab);
	tab[3] = '\0';
	printf("%s\n", tab);
}
