#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	temp = 0;
	i = 0;
	while ((i-1) < (size-i))
	{
		++i;
		temp = tab[i-1];
		tab[i-1] = tab[size-i];
		tab[size-i] = temp;
	}
}
