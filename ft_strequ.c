#include <stddef.h>
int ft_strequ(const char *s1, const char *s2){
    int i;
    i = 0;
    if(s1 == NULL && s2 == NULL){
        return 1;
    }
    if(s1 == NULL || s2 == NULL){
        return 0;
    }
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        if(s1[i] != s2[i]){
            return 0;
        }
        i++;
    }
    return (s1[i] == s2[i]);
}