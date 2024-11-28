#include <stdio.h>
#include <stdlib.h>
void *ft_memalloc(size_t size){
    int i;
    if(size == 0){
        return NULL;
    }
    int *allocate = (int *)malloc(size *sizeof(int));
    if(allocate == NULL){
        return NULL;
    }
    i = 0;
    while (i < size)
    {
        allocate[i] = -1;
        i++;
    }
    return allocate;
}