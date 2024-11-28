#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *s){
    int i;
    i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
 *ft_strmapi(char const *s, char (*f)(unsigned int , char)){
    char *allocate;
    int i;
    int len = ft_strlen(s);
    allocate = (char *)malloc((len + 1) *sizeof(char));
    if(allocate == NULL){
        return NULL;
    }
    i = 0;
    while (i < len)
    {
        allocate[i] = f(i, s[i]);
        i++;
    }
    allocate[i] = '\0';
    return allocate;
}