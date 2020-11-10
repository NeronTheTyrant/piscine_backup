#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (nb == 0)
		return(1);
	while (i++ < power)
		result *= nb;
	return(result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 8));
	return(0);
}
