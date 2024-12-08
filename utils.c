#include "utils.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
void  ft_putchar(char c){
    write(1, &c, 1);
}

char *ft_putstr(char *str){
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    str[i] = '\0';
    return str;
}

void ft_putnbr(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    write(1, &"0123456789"[n % 10], 1);
}

int ft_putnbr_base(unsigned long n, const char *base) {
    int len = 0;
    if (n >= 16) {
    len += ft_putnbr_base(n / 16, base);
     }
     ft_putchar(base[n % 16]);
     len ++;
     return len;
}

void unsigned_int(unsigned int n){
    if(n > 9){
        unsigned_int(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
