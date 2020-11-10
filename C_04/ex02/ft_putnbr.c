#include <unistd.h>

void	ft_putnbr(int nb)
{
	int temp;

	if (nb = -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	temp = nb % 10 + '0';
	write(1, &temp, 1);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return(0);
}
