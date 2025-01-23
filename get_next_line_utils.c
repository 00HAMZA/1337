#include "get_next_line.h"
int ft_strlen(const char *str){
    size_t i = 0;
    if (!str){
        return 0;
    }
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strchr(const char *s, int c) {
    size_t i = 0;
    if (!s){
        return NULL;
    }
    while (s[i] ||(char)c == '\0')
    {
        if (s[i] == (char)c){
            return (char *)&s[i];
        }
        i++;
    }
    return NULL;
}

char *ft_strjoin(char *s1, char *s2){
        if (!s1 || !s2){
        return NULL;
        }
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *result = malloc((len1 + len2 + 1) *sizeof(char));
    if (!result){
        return NULL;
    }
    size_t i = 0;
    size_t j = 0;
    while (i < len1)
    {
        result[i] = s1[i];
        i++;
    }
    while (j < len2)
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return result;
}
    char *ft_strcpy(char *dest, const char *src){
        if (!src || !dest){
            return NULL;
        }
        size_t i = 0;
        while (src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        return dest;
    }