#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return(0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(40001));
	return(0);
}
