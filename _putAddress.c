#include "main.h"
/**
 * _putAddress - put address of @nbr
 * @nbr: number
 * Return: int
 */
int _putAddress(unsigned long int nbr)
{
	int i;

	i = 0;
	i = _putstr("0x");
	i += _putnbr_base(nbr, B16L);
	return (i); 
}
