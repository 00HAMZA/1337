#include <stdio.h>
void *ft_memchr(const void *str, int chr, int len){
    char *s;
    char c;
    c = (unsigned char)chr;
    s = (char *)str;
    int i = 0;
    if(*s == 0){
        return NULL;
    }
    if(len == 0){
        return NULL;
    }
    while (s[i] && i < len)
    {
        if(s[i] == c){
            return &s[i];
        }
        i++;
    }
    return NULL;   
}
int main(){
    char str[] = "hamza@gamail.com";
    char c = '@';
    int len = 8;
    char *p = ft_memchr(str, c, len);
    printf("%s\n", p);
}