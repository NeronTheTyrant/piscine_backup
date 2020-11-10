#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_File_H
# define BUF_SIZE 10
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef struct	s_file
{
	int	fd;
	char	*path;
}		t_file;
#endif
