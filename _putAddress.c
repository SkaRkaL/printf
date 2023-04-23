#include "main.h"

int _putAddress(unsigned long long nbr)
{
	int i;

	i = 0;
	i = _putstr("0x");
	i += _putnbr_base(nbr, B16L);
	return (i);
}
