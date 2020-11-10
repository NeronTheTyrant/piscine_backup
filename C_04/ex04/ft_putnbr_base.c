#include <stdio.h>
#include <unistd.h>

int	ft_base_check(char *base, int base_size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (base_size <= 1)
		return(1);
	while (base[i] != 0)
	{
		if (base[i] == 0 || base[i] == 43 || base[i] == 45)
			return(1);
		while (base[j] !=0)
		{
			if (base[i] == base[j])
				return(1);
			j++;
		}
		j = ++i + 1;
	}
	return(0);
}




void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	if (ft_base_check(base, base_size))
		return;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr > (base_size - 1))
		ft_putnbr_base(nbr / base_size, base);
	write(1, &base[nbr % base_size], 1);
}

int	main(void)
{
	ft_putnbr_base(1354654623, "125+");
	return(0);
}
	

