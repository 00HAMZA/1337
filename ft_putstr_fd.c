#include <unistd.h>
void ft_pustr_fd(const char *s, int fd){
    int i;
    i = 0;
    if(s == NULL){
        return ;
    }
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }   
}