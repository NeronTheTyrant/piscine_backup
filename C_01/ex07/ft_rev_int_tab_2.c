#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int i;
        int temp[size];
        i = 0;
        while (i < size)
        {
                ++i;
                temp[size-i] = tab[i-1];
        }
        i = 0;
        while (i < size)
        {
                tab[i] = temp[i];
                i++;
        }
        i = 0;
        while (i < size)
        {
                printf("%d ", tab[i]);
                i++;
        }
}

int     main(void)
{
        int lol[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        ft_rev_int_tab(lol, 10);
        return(0);
}
