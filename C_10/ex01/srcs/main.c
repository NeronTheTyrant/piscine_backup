#include "ft_cat.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	ft_display_error(char *path)
{
	ft_putstr(2, "cat: ");
	ft_putstr(2, path);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	fd;
	int	ret;
	char	buf[BUF_SIZE + 1];
	int	i;

	i = 1;
	if (argc == 1)
		i = 0;
	while (i < argc)
	{
		if (i == 0)
			fd = 0;
		else if ((fd = open(argv[i], O_RDONLY)) == -1)
			ft_display_error(argv[i]);
		while (fd > -1 && (ret = read(fd, buf, BUF_SIZE)))
		{
			if (ret == -1)
			{
				ft_display_error(argv[i]);
				break;
			}
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
		if (fd != 0)
			close(fd);
		i++;
	}
}
