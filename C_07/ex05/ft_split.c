#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char *str);
int	ft_strstrn(char *haystack, char *needle, int needle_len);
int	ft_strndup(char *src, char **dest, int size);
char	**ft_split(char *str, char *charset);

int	main(void)
{
	int i = 0;
	char **fuck = ft_split("fuck&hehyeah&hehlol&heh&hehokay", "&heh");
	while (fuck[i])
	{
		printf("%s\n", fuck[i]);
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int charset_len;
	char *tab;
	char **tab_2;

	i = 0;
	charset_len = ft_strlen(charset);
	tab_2 = &tab;
	while (*str)
	{
		while(ft_strstrn(str++, charset, charset_len))
			i++;
		ft_strndup(str, tab_2, i);
		str += i + charset_len;
		i = 0;
		tab_2++;
	}
	return (tab_2);
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return(i);
}

int	ft_strstrn(char *haystack, char *needle, int needle_len)
{
	int i;

	i = 0;
	while (*haystack && *needle && *haystack == *needle)
	{
		haystack++;
		needle++;
		i++;
	}
	if (i == needle_len)
		return(0);
	return(1);
}

int	ft_strndup(char *src, char **dest, int size)
{
	dest = malloc(sizeof(*dest) * size + 1);
	char **temp;
	int i;

	temp = dest;
	i = 0;
	while (size)
	{
		*temp[i] = *src++;
		i++;
		size--;
	}
	return(0);
}
