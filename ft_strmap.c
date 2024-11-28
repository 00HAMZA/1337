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
char *ft_strmap(char *s, char (*f)(char)){
    char *allocate;
    int i;
    int len  = ft_strlen(s);
    i = 0;
    if(s == NULL || f == NULL){
        return NULL;
    }
    allocate = (char *)malloc((len + 1) *sizeof(char));
    if (allocate == NULL)
    {
            return NULL;
            }
        
        while (i < len)
        {
            allocate[i] = f(s[i]);
            i++;
        }
        allocate[i] = '\0';
        return allocate;
}