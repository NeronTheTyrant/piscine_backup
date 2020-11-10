#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int mid;
	int i;

	mid = min;
	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return(0);
	}
	mid = max - min;
	range[0] = malloc(sizeof(*range) * mid);
	if (range[0] = NULL)
		return(-1);
	while (i < mid)
	{
		(*range)[i] = min + i;
		i++;
	}
	else return(mid);
}

int	main(void)
{
	int *tab;
	ft_ultimate_range(&tab, 1, 100);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return(0);
}
