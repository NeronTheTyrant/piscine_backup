#include "ft_tail.h"

int		ft_exchange_bottom(char **argv, int bottom, int middle, int top)
{
	int len;
	int i;
	char *temp;

	len = middle - bottom;
	i = 0;
	while (i < len)
	{
		temp = argv[bottom + i];
		argv[bottom + i] = argv[top - (middle - bottom) + i];
		argv[top - (middle - bottom) + i] = temp;
		i++;
	}
	return (len);
}

int		ft_exchange_top(char **argv, int bottom, int middle, int top)
{
	int len;
	int i;
	char *temp;

	len = top - middle;
	i = 0;
	while (i < len)
	{
		temp = argv[bottom + i];
		argv[bottom + i] = argv[middle + i];
		argv[middle + i] = temp;
		i++;
	}
	return (len);
}

void	ft_exchange(char **argv)
{
	int		bottom;
	int		middle;
	int		top;
	int		len;

	bottom = g_first_nonopt;
	middle = g_last_nonopt;
	top = g_optind;
	while (top > middle && middle > bottom)
	{
		if (top - middle > middle - bottom)
		{
			len = ft_exchange_bottom(argv, bottom, middle, top);
			top -= len;
		}
		else
		{
			len = ft_exchange_top(argv, bottom, middle, top);
			bottom += len;
		}
	}
	g_first_nonopt += g_optind - g_last_nonopt;
	g_last_nonopt = g_optind;
}
