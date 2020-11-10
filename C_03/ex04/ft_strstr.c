#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
        int i;
        int to_find_len;

        to_find_len = 0;
        while (to_find[to_find_len])
                to_find_len++;
        while (*str)
        {
                while ((*str == *to_find) && *str && *to_find)
                {
                  i = 0;
                        while (*str && *to_find && *str == *to_find)
                        {
                                str++;
                                to_find++;
                                i++;
                        }
                        str -= i;
                        to_find -= i;
                        if (i == to_find_len)
                                return((char *)str);
                        str++;
                }
                str++;
        }
        return(0);
}

int     main(void)
{
        char tab1[] = "fuck this thisk shit";
        char tab2[] = "thisk";
        printf("%s\n", ft_strstr(tab1, tab2));
        return(0);
}
