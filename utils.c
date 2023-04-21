#include "main.h"

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
    int count;

    count = 0;
	if (str == NULL)
		return (ft_putstr("(null)")); // in case 3titha ft_printf("%s", NULL); should print "(null)"
    if (*str)
    {
        count += ft_putchar(*str);
        count += ft_putstr(str + 1);
    }
    return (count);
}

int ft_putnbr(int nbr)
{
    int count;
    
    count = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        count += ft_putchar('-');
    }
    if (nbr > 9)
    {
        count += ft_putnbr(nbr / 10);
        count += ft_putnbr(nbr % 10);
    }
    else
        count += ft_putchar(nbr + 48);
    return (count);
}

int ft_putnbr_unsigned(unsigned int nbr)
{
    int count;
    count = 0;
    if (nbr > 9)
    {
        count += ft_putnbr_unsigned(nbr / 10);
        count += ft_putnbr_unsigned(nbr % 10);
    }
    else
        count += ft_putchar(nbr + 48);
    return (count);
}

int ft_putnbr_base(unsigned long long nbr, char *base)
{
    unsigned long long len_base;
    int count, p;

    len_base = 0;
    while (base[len_base])
        len_base++;
    count = 0;
    if (nbr >= len_base)
        count += ft_putnbr_base(nbr / len_base, base);
    p = ft_putchar(base[nbr % len_base]);
    if (p < 0)
        return (-1);
    count++;
    return (count);
}

int ft_putAddress(unsigned long long nbr)
{
    int i = 0;
    i = ft_putstr("0x");
    i += ft_putnbr_base(nbr, B16L);
    return (i);
}
