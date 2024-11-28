#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
    {
       i++;
    }
    return i;
}
char *ft_strdup(char *str){
    int i;
    i = 0;
     char *allocate = (char*)malloc(ft_strlen(str) + 1);
     if(allocate == NULL){
        return NULL;
     }
    while (str[i])
    {
        allocate[i] = str[i];
        i++;
    }
    allocate[i] = '\0';
    return allocate;
}
