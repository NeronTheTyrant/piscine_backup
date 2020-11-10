#include <string.h>
#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != 0 && s2[i] != 0) && s1[i] == s2[i] && i < (n - 1))
		i++;
	return(s1[i] - s2[i]);
}

int	main(void)
{
	char tab1[] = "apples";
	char tab2[] = "appzl";
	char tab3[] = "apples";
	char tab4[] = "appales";
	printf("%d\n", ft_strncmp(tab1, tab2, 5));
	printf("%d\n", ft_strncmp(tab1, tab3, 5));
	printf("%d\n", ft_strncmp(tab1, tab4, 5));
	return(0);
}
