#ifndef FT_CAT_H
# define FT_CAT_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

#define BUF_SIZE 4096

typedef struct 	s_file
{
	int	fd;
	char	*path;
}		t_file;
#endif
