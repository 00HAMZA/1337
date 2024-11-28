#include <unistd.h>
#include "libft.h"
void ft_putstr(const char *s){
    int i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
     write(1, "\n", 1);
}