#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;
	int half_ref;
	int result;

	sqrt = 1;
	half_ref = nb / 2;
	result = 1;
	if (nb == 0 || nb == 1)
		return(nb);
	while (result != nb)
	{
		if (sqrt > half_ref)
			return(0);
		sqrt++;
		result = sqrt * sqrt;
	}
	return(sqrt);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(-16));
	return(0);
}
