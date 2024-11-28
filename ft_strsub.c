#include <stdio.h>
#include <stdlib.h>
char *ft_strsub(char const *s, unsigned int start, size_t len){
   size_t i;
   char *sub; 
   if(s == NULL){
    return NULL;
   }
   if(start < 0){
    return NULL;
   }
   sub = (char*)malloc((len + 1 ) *sizeof(char));
   if(sub == NULL){
    return NULL;
   }
    i = 0;
   while (i < len)
   {
        sub[i] = s[i + start];
        i++;
   }
   sub[i] = '\0';
   return sub;
}