#include <stdio.h>
void ft_strdel(char **as){
    int i;
    i = 0;
    if(as){
            while (as[i])
    {
        free(as[i]);
        i++;
    }
    *as = NULL;
    }
}