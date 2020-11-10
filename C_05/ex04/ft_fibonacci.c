#include <stdio.h>
/*
int	ft_fibonacci(int index)
{
	int i;
	int fib[] = {0, 1, 1};

	i = 2;
	while (i < index)
	{
		fib[0] = fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0] + fib[1];
		i++;
	}
	return(fib[2]);

}
*/


int	ft_fibonacci(int index)
{
	int fib[] = {0, 1, 1, 2};
	
	if (index >= 0 && index <= 3)
		return(fib[index]);
	if (index < 0)
		return(-1);
	else
		return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(-5));
	return(0);
}

