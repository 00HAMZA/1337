#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 12
#endif
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdint.h>
char *get_next_line(int fd);
int ft_strlen(const char *str);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(const char *s, int c);
char *ft_strcpy(char *dest, const char *src);
#endif