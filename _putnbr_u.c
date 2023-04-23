#include "main.h"

int _putnbr_u(unsigned int nbr)
{
	int count;

	count = 0;
	if (nbr > 9)
	{
		count += _putnbr_u(nbr / 10);
		count += _putnbr_u(nbr % 10);
	}
	else
		count += _putchar(nbr + 48);
	return (count);
}
