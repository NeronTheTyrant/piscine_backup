#include "ft_tail.h"
#include <stdio.h>

int		g_optind = 1;
int		g_optpos = 1;
int		g_opterr = 0;
char	g_opterrchar;
char	*g_optarg;
char	*g_opterrstr;
int		g_first_nonopt = 1;
int		g_last_nonopt = 1;

int		ft_is_in_optstring(char opt, char *optstring);
void	ft_exchange(char **argv);

int		ft_getopt_err(char optchar, int errcode)
{
	
	g_opterr = 1;
	g_opterrchar = optchar;
	if (errcode == 1)
		g_opterrstr = "invalid option";
	if (errcode == 2)
		g_opterrstr = "option requires an argument";
	return (-1);
}

void	ft_getopt_start(int argc, char **argv)
{
	g_optarg = '\0';
	g_opterrstr = '\0';
	if (g_optpos == 0)
		g_optpos++;
	if (g_first_nonopt != g_last_nonopt && g_last_nonopt != g_optind)
		ft_exchange(argv);
	else if (g_last_nonopt != g_optind)
		g_first_nonopt = g_optind;
	while (g_optind < argc && (argv[g_optind][0] != '-' || !argv[g_optind][1]))
		g_optind++;
	g_last_nonopt = g_optind;
}

void	ft_getopt_nextarg(void)
{
	++g_optind;
	g_optpos = 0;
}

int		ft_getopt(int argc, char **argv, char *optstring)
{
	char optchar;
	int i;

	ft_getopt_start(argc, argv);
	if (g_optind >= argc || !argv[g_optind])
		return (-1);
	optchar = argv[g_optind][g_optpos];
	++g_optpos;
	if (!argv[g_optind][g_optpos])
		ft_getopt_nextarg();
	if ((i = ft_is_in_optstring(optchar, optstring)) == -1)
		return (ft_getopt_err(optchar, 1));
	if (optstring[i + 1] == ':')
	{
		if (!argv[g_optind])
			return (ft_getopt_err(optchar, 2));
		if (g_optpos == 0 && argv[g_optind][0] == '-')
			g_optpos++;
		g_optarg = &argv[g_optind][g_optpos];
		ft_getopt_nextarg();
	}
	return (optchar);
}

int		ft_is_in_optstring(char opt, char *optstring)
{
	int i;

	i = 0;
	while (optstring[i])
	{
		if (opt == optstring[i])
			return (i);
		i++;
	}
	return (-1);
}
