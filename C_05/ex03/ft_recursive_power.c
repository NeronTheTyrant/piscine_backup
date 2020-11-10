#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
		return(1);
	else
		return(ft_recursive_power(nb, power - 1) * nb);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(7, 5));
	return(0);
}
