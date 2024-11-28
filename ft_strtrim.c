#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *s){
    int i ;
    i = 0 ;
    while (s[i])
    {
        i++;
    }
    return i ;
}
char *ft_filter(char *s){
    int i ;
    i = 0;
    while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
    {
        i++;
    }
    while (s[i]){
        write(1, &s[i], 1);
        i++;
    }
    return &s[i];
}
char *ft_ffilter(char *s){
    int  i = 0;
    while (s[i])
    {
        i++;
    } 
    while (i > 0 && (s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ' '))
    {
       i--;
    }
    s[i] = '\0';
    return s;
}
char *ft_strtrim(char *s){
    char *trim;
    int i  = 0;
    if(s == NULL){
        return NULL;
    }
    char *filter = ft_filter(ft_ffilter(s));
    int len = ft_strlen(filter);
    trim = (char *)malloc((len + 1 ) * sizeof(char));
    if(trim == NULL){
        return NULL;
    }
    while (i < len)
    {
        trim[i] = s[i];
        i++;
    }
    trim[i] = '\0';
    return trim;
}
