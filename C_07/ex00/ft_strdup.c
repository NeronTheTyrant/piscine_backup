#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}


char	*ft_strdup(char *src)
{
	unsigned int size = ft_strlen(src) + 1;
	char *dest = malloc(sizeof(*dest) * size);
	char *temp = dest;
	if (dest == NULL)
		return(NULL);
	while (size)
	{
		*temp++ = *src++;
		size--;
	}
	return(dest);
}

int	main(void)
{
	char str[10] = "fuck yeah";
	printf("%s\n", str);
	printf("%s\n", ft_strdup(str));
	return(0);
}
