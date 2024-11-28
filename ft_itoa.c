#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int n) {
    int len = 0;
    int temp = n;
    if (n == 0) {
        char *str = (char *)malloc(2 * sizeof(char));
        if (str == NULL) {
            return NULL;
        }
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    if (n < 0) {
        len++;
        n = -n;
    }
    int temp_n = n; 
    while (temp_n != 0) {
        temp_n /= 10;
        len++; 
    }
    char *str = (char *)malloc((len + 1) * sizeof(char)); // +1 for the null terminator
    if (str == NULL) {
        return NULL; 
    }
    str[len] = '\0';
    while (n != 0) {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    if (temp < 0) {
        str[0] = '-';
    }
    return str;
}