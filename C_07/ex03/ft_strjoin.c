#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return(dest);
}

int	ft_full_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return(len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int full_len = ft_full_len(size, strs, sep) + 1;
	int i = 0;
	char *result;

	if (size < 0)
		result = malloc(sizeof(*result) * full_len);
	else
		result = malloc(sizeof(*result));

	while (i < size)
	{
		ft_strcat(result, strs[i]);
		i++;
		if (i < size)
			ft_strcat(result, sep);
	}
	result[full_len] = 0;
	return(result);
}


int	main(void)
{
	char *strs[3] = {"hell yeah", "fuck yeah", "baby blue"};
	printf("%s\n", strs[0]);
	printf("%s\n", strs[1]);
	printf("%s\n", strs[2]);
	char *sep = " hello ";
	printf("%s\n", ft_strjoin(0, strs, sep)); 
	return(0);
}
