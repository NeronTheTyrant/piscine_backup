#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return(1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);

}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	return(0);
}
