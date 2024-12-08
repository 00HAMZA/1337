#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include "utils.h"

int ft_printf(const char *format, ...){
    va_list args;
    va_start(args, format);
    int i = 0;
    int count = 0;
    while (format[i])
    {
        if(format[i] == '%'  && format[i + 1] == 'c'){
            i++;
            i++;
            char *x = va_arg(args, char*);
            write(1, &x, 1);
        }
        else if(format[i] == '%' && format[i + 1] == 's'){
            i++;
            char *x = va_arg(args, char*);
            if(x == NULL){
              ft_putstr("(null)");
            }
           ft_putstr(x);
        }
        else if(format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i')){
            i++;
            int x = va_arg(args, int);
            ft_putnbr(x);
        }
        else if(format[i] ==  '%' && format[i + 1] ==  'u'){
            i++;
            unsigned int x = va_arg(args, unsigned int);
            unsigned_int(x);
        }

        else if(format[i] == '%' && format[i + 1] == '%'){
            i++;
            write(1, &format[i], 1);
        }
        else if(format[i] == '%' && format[i + 1] ==  'x'){
            i++;
            int x = va_arg(args,  int);
            const char base[] = "0123456789abcdef";
            ft_putchar('0');
            ft_putchar('x');
            ft_putnbr_base(x, base);
        }
        else if(format[i] == '%' && format[i + 1] == 'X'){
            i++;
            int x = va_arg(args, int);
            const char base[] = "0123456789ABCDEF";
            ft_putchar('0');
            ft_putchar('X');
            ft_putnbr_base(x, base);
        }
        else if(format[i] == '%' && format[i + 1] == 'p'){
            i++;
            ft_putchar('0');
            ft_putchar('x');
            const char base[] = "0123456789abcdef";
            void *x = va_arg(args, void *);
            ft_putnbr_base((unsigned long)x, base);
        }
        else{
            write(1, &format[i], 1);
        }
        i++;
    }
    va_end(args);
    return count ;
}