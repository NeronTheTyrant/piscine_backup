#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int range;
	int i;

	range = min;
	i = 0;
	if (min >= max)
		return(NULL);
	while (range < max)
		range++;
	range -= min;
	int *tab = malloc(sizeof(*tab) * range);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return(tab);
}

int	main(void)
{
	int *fuck = ft_range(1, 10000);
	int i = 0;
	while (fuck[i] != 0)
	{
		printf("%d ", fuck[i]);
		i++;
	}
	return(0);
}
