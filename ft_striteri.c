#include <stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int , char *)){
    int i;
    i = 0;
    if(str == NULL || f == NULL){
        return NULL;
    }
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}