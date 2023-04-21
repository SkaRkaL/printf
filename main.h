#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

# define B16L "0123456789abcdef"
# define B16U "0123456789ABCDEF"
# define B2 "01"
# define B8 "01234567"
# define B10 "0123456789"


int ft_putnbr_unsigned(unsigned int nbr);
int	ft_putnbr_base(unsigned long long nbr, char *base);
int	ft_putAddress(unsigned long long nbr);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);

int ft_printf(const char *format, ...);

#endif