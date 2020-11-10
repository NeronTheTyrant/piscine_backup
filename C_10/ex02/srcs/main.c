#include "ft_tail.h"

int	g_offset = 0;

enum e_mode
{	
	LINE_MODE, 
	BYTE_MODE
} g_mode = LINE_MODE;

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
	ft_putstr(2, "tail: ");
	ft_putstr(2, path);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	write(2, "\n", 1);
}

int	ft_get_size(int fd, char *path)
{
	char buf[BUF_SIZE + 1];
	int ret;
	int size;

	size = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
		{
			ft_display_error(path, 1);
			return (-1);
		}
		size += ret;
	}
	close(fd);
	return (size);
}

char	*ft_get_buf(int fd, char *path, int size)
{
	char *new_buf;

	if (size == -1)
		return (0);
	if (!(new_buf = malloc(sizeof(new_buf) * (size + 1))))
		return (0);
	open(argv[i], O_RDONLY);
	read(fd, new_buf, size);
	close(fd);
	return (new_buf);
}

int	ft_get_start(char *new_buf, char **argv, int size)
{
	int i;

	i = 0;
	if (ft_is_num(&argv[optind][i + 1]))
		g_offset = ft_atoi(&argv[optind][i + 1]);
	else
	{
		ft_display_error(argv[i], 0);
		return (0);
	}
	if (!ft_strcmp(argv[1], "-c"))
	{
		if (ft_is_num(argv[2]))
			return (ft_atoi(argv[2]));
		else

	}
}

int	ft_check_args(char *opt, char *next_arg)
{
	if (opt[1])
	{
		if (ft_is_num(&opt[1]))
			g_offset = ft_atoi(&opt[1]);
		else
		{
			ft_display_error(&opt[1], 0); //invalid number of bytes
			return (-1);
		}
	}
	else if (next_arg)
	{
		if (ft_is_num(next_arg))
			g_offset = ft_atoi(next_arg);
		else
		{
			ft_display_error(next_arg, 0);
			return (-1);
		}
	}
	else
	{
		ft_display_error(opt, 1); //option requires an argument
		return (-1);
	}
	return (g_offset)
}


int	main(int argc, char **argv)
{
	int	fd;
	char	*new_buf;
	int	size;;
	int	i;
	int 	j;

	size = 0;
	i = 1;
	while (i < argc && argv[i][0] == '-')
	{
		j = 1;
		if (argv[i][0] == '-')
		{
			while (argv[i][j])
			{
				if (argv[i][j] == 'c')
				{
					g_mode = BYTE_MODE;
					if (ft_check_args(&argv[i][j], argv[i + 1]) == -1)
						return (0);
					break;
				}
				else
				{
					ft_display_error(argv[i][j], 2); //invalid option
					return (0);
				}
				j++;
			}
		}
		i++;
	}

	if ((fd = open(argv[i], O_RDONLY)) == -1)
		ft_display_error(argv[i], 0);
	else
	{
		size = ft_get_size(fd, argv[i]);	
		new_buf = ft_get_buf(fd, argv[i], size);
		ft_putstr(&new_buf[size - ft_get_start(new_buf, size, argv)]);
		free(new_buf);
	}
}

char	whyisthishappening(int i)
{
	what the fuck my vim is broken
}
