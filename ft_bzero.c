#include "libft.h"

void *ft_bzero(void *str, int n){
    unsigned char *p = (unsigned char *)str;
    int i = 0;
    while (i < n)
    {
        p[i] = 0;
         i++;
    }
    return (str);
}