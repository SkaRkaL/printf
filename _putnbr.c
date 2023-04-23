#include "main.h"
/**
 * _putnbr - print number
 * @n: number
 * Return: int
 */
int _putnbr(int n)
{
	int count, nbr;
	long i;

	count = 0;
	i = n;
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
