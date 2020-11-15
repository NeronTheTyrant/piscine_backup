#ifndef FT_CAT_H
# define FT_CAT_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>
#include <stdlib.h>

#define BUF_SIZE 4096

typedef struct 	s_file
{
	int	fd;
	char	*path;
}		t_file;

extern int		g_optind;
extern int		g_optpos;
extern int		g_opterr;
extern char		g_opterrchar;
extern char		*g_optarg;
extern char		*g_opterrstr;
extern int		g_first_nonopt;
extern int		g_last_nonopt;

void			ft_exchange(char **argv);
int				ft_getopt(int argc, char **argv, char *optstring);
#endif
