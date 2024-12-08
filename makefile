CC = gcc
CFLAGS = -Wall -Wextra -Werror
all : final
main.o : main.c
	@echo "compiling the main file into object file"
	@gcc $(CFLAGS) -c main.c
utils.o : utils.c
	@echo "compiling the utils file into object file"
	@gcc $(CFLAGS) -c utils.c
ft_printf.o : ft_printf.c
	@echo "compiling the ft_printf file into object file"
	@gcc $(CFLAGS) -c ft_printf.c
final : utils.o main.o ft_printf.o
	@echo "linking and producing into exucitable file "
	@gcc utils.o main.o ft_printf.o -o final 
clean :
	@echo "Removing everithing !!"
	@rm utils.o main.o ft_printf.o final
