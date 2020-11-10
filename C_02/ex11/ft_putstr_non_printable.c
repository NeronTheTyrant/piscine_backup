#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	char hex_ref[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	while (str[i] != 0)
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			write(1, &hex_ref[(str[i] / 16)], 1);
			write(1, &hex_ref[(str[i] % 16)], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		++i;
	}

}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu\tvas\rbien\e?");
	return(0);
}
