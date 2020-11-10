#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[9] = "fuck yeah";

	printf("%s\n", str);
	printf("%s\n", strdup(str));
	return(0);
}
