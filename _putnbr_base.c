#include "main.h"
/**
 * _putnbr_base - put number in base
 * @nbr: number
 * @base: base
 * Return: int
 */
int _putnbr_base(unsigned long int nbr, char *base)
{
	unsigned long int len_base;
	int count, p;

	len_base = 0;
	while (base[len_base])
		len_base++;
	count = 0;
	if (nbr >= len_base)
		count += _putnbr_base(nbr / len_base, base);
	p = _putchar(base[nbr % len_base]);
	if (p < 0)
		return (-1);
	count++;
	return (count);
}
