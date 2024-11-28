#include <stddef.h>
void ft_strclr(char *str){
    int i ;
    i = 0;
    if(str != NULL){
    
    while (str[i])
    {
        str[i] = '\0';
        i++;
    }
    }   
}