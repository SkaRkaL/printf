#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

# define B2   "01"
# define B8   "01234567"
# define B10  "0123456789"
# define B16U "0123456789ABCDEF"
# define B16L "0123456789abcdef"


int		ft_non_printable(char *str); // Task 5
int		prints_rot13(char *s); // Task 14
int		ft_strrev(char *s);


int		ft_putnbr_unsigned(unsigned int nbr);
int		ft_putnbr_base(unsigned long int nbr, char *base);
int		ft_putAddress(unsigned long long nbr);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_putchar(char c);

int ft_printf(const char *format, ...);

#endif