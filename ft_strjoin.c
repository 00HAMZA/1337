#include <stdio.h>
#include <stdlib.h>
int ft_strlen(const char *s){
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
char *ft_strjoin(const char * s1, const char *s2){
    char *concat;
    int i  = 0;
    int j = 0;
    int k = 0;
    int  len = ft_strlen(s1) +  ft_strlen(s2) ;
    concat = (char*)malloc((len + 1) * sizeof(char));
    if(concat == NULL){
        return NULL;
    }
    if(s1 == NULL  && s2 == NULL){
        return NULL;
    }
     if(s1 == NULL  || s2 == NULL){
        return NULL;
    }
    while (s1[i])
    {
       concat[k] = s1[i] ;
       k++;
       i++;
    }
    while (s2[j])
    {
        concat[k] = s2[j];
        k++;
        j++;
    }
    
    concat[k] = '\0';
    return concat;
}