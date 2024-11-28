    #include <stdlib.h>
    #include <stdio.h>
    char *ft_strnew(size_t size){
        int i;
        char *str = (char*)malloc(size + 1);
        if(!str){
            return NULL;
        }
        i = 0;
        while (i < size)
        {
            str[i] = '\0';
            i++;
        }
        str[i] = '\0';
        return str;
    }