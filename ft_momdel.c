#include <stdio.h>
void ft_memdel(void **ap){
    int i;
    i = 0;
    if(ap && *ap){
        free(ap); 
        *ap = NULL;
    }
}