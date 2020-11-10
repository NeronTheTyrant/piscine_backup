#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	unsigned int dest_len;

	i= 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	if (dest_len >= size)
		return(size);
	while (src[i] != 0 && dest_len < size - 1)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = 0;
	return(dest_len);
}

int		main(void)
{
	char tab1[50] = "Hi there!01234567890123456789012345678901234567890";
	char tab2[] = " I am Martin01234567890123456789012345678901234567890123456789";
	printf("attempted to append %d characters, resulting string is:\n%s\n", ft_strlcat(tab1, tab2, sizeof(tab1)), tab1);
	return(0);
}
