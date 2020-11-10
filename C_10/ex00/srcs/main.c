#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_error(int err)
{
	if (err == 1)
		write(2, "File name missing.\n", 19);
	if (err == 2)
		write(2, "Too many arguments.\n", 20);
	if (err == 3)
		write(2, "Cannot read file.\n", 18);
	return (0);
}

int	main(int argc, char **argv)
{
	t_file	file;
	char	buf[BUF_SIZE + 1];
	int	ret;

	if (argc == 1)
		return(ft_error(1));
	if (argc > 2)
		return(ft_error(2));
	file.path = argv[1];
	if ((file.fd = open(file.path, O_RDONLY)) == -1)
		return(ft_error(3));
	while ((ret = read(file.fd, buf, BUF_SIZE)) != 0)
	{
		if (ret == -1)
			return (ft_error(3));
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(file.fd);
	return (0);
}
