#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != 0 && s2[i] !=0) && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return(0);
	if (s1[i] < s2[i])
		return((s2[i] - s1[i]) * -1);
	if (s1[i] > s2[i])
		return((s1[i] - s2[i]));
	return(0);
}

int	main(void)
{
	char tab1[] = "apples";
	char tab2[] = "appzl";
	printf("%d\n", strcmp(tab1, tab2));
	return(0);
}
