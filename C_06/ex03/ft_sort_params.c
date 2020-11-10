#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while((str1[i] && str2[i]) && str1[i] == str2[i])
		i++;
	return(str1[i] - str2[i]);
}

void	ft_sort_params(char **argv, int argc)
{
	int i;
	int j;
	char *temp;

	i = 0;
	j = i + 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		j = ++i + 1;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
	

