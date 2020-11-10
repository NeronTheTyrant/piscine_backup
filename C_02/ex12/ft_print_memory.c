#include <stdio.h>
#include <unistd.h>

void	ft_putaddr(unsigned long int nbr);
void	ft_putnbr_hex(unsigned long int nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putaddr(unsigned long int nbr)
{
	int i = 0;
	unsigned long int temp = nbr;
	while (temp != 0 && i < 16)
	{
		temp = temp / 16;
		i++;
	}
	while (i < 16)
	{
		ft_putchar('0');
		i++;
	}
	ft_putnbr_hex(nbr);
	write(1, ": ", 2);
}

void	ft_putnbr_hex(unsigned long int nbr)
{
	char hex [] = "0123456789abcdef";
	if (nbr > 15)
		ft_putnbr_hex(nbr / 16);
	ft_putchar(hex[nbr % 16]);
}

void	ft_putchar_hex(char *addr, unsigned int size)
{
	char	hex[] = "0123456789abcdef";
	int i = 0;
	while (i < 16)
	{
		if (addr[size + i] != 0)
		{
			ft_putchar(hex[(addr[size + i] / 16)]);
			ft_putchar(hex[(addr[size + i] % 16)]);
			ft_putchar(hex[(addr[size + i + 1] / 16)]);
			ft_putchar(hex[(addr[size + i + 1] % 16)]);
		}
		else
			ft_putchar(' ');
		ft_putchar(' ');
		i += 2;
	}

}
	

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*ptr;
	unsigned int i;
	unsigned int j;
	ptr = addr;
	i = 0;
	j = 0;
	if (!size)
		return(addr);
	while (i < size)
	{
		ft_putaddr((unsigned long int)&ptr[i]);
		ft_putchar_hex(ptr, i);
		while (j < 16 && i < size)
		{
			if (ptr[i] >= 32 && ptr[i] <= 126)
				ft_putchar(ptr[i]);
			else
				ft_putchar('.');
			++i;
			++j;
		}
		ft_putchar('\n');
		j = 0;
	}
	return(addr);
}

int	main(void)
{
	char tab[] = "lolilolilol";
	printf("%lu\n", sizeof(tab));
	ft_print_memory(tab, sizeof(tab));
	return(0);
}
