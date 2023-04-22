#include "main.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _putstr(char *str)
{
    int count;

    count = 0;
	if (str == NULL) // in case 3titha _printf("%s", NULL); should print "(null)"
		return (_putstr("(null)"));
    if (*str)
    {
        count += _putchar(*str);
        count += _putstr(str + 1);
    }
    return (count);
}

int _putnbr(int n) // rediit putnbr diyalk lawla
{
    int count = 0, nbr;
    long i = n;
    if (i < 0)
    {
        i *= -1;
        count += _putchar('-');
    }
    nbr = i % 10;
    if (i > 9)
        count += _putnbr(i / 10);
    count += _putchar(nbr + 48);
    return (count);
}


int _putnbr_unsigned(unsigned int nbr)
{
    int count;
    count = 0;
    if (nbr > 9)
    {
        count += _putnbr_unsigned(nbr / 10);
        count += _putnbr_unsigned(nbr % 10);
    }
    else
        count += _putchar(nbr + 48);
    return (count);
}

int _putnbr_base(unsigned long int nbr, char *base)
{
    unsigned long int len_base;
    int count, p;

    len_base = 0;
    while (base[len_base])
        len_base++;
    count = 0; // was count++; o sa7e7tha hhh 
    if (nbr >= len_base)
        count += _putnbr_base(nbr / len_base, base);
    p = _putchar(base[nbr % len_base]);
    if (p < 0)
        return (-1);
    count++;
    return (count);
}

int _putAddress(unsigned long long nbr)
{
    int i = 0;
    i = _putstr("0x");
    i += _putnbr_base(nbr, B16L);
    return (i);
}


// int main (void)
// {
// 	_putstr_non_printable("Best\nSchool\t");
// 	_putchar('\n');
// }