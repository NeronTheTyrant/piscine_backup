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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (!(ft_is_prime(nb)))
			nb++;
		else if (ft_is_prime(nb))
			return(nb);
	}
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(6));
	return(0);
}
