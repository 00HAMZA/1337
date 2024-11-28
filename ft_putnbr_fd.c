#include <unistd.h>
void ft_putchar_fd(char c, int fd){
    write(fd, &c, 1);
}
void ft_putnbr_fd(int nb , int fd){
        if(nb == -2147483648){
            write(fd, "-2147483648", 11);
            return;
        }
        if(nb < 0){
            ft_putchar_fd('-', fd);
            nb = -nb;
        }
        if(nb >= 10){
             ft_putnbr_fd(nb / 10 , fd);
             ft_putchar_fd(nb % 10 + '0', fd);
        }
        if(nb >= 0 && nb <= 9){
            ft_putchar_fd(nb + '0', fd);
        }
}