#include "main.h"

int _putstr(char *str)
{
	int count;

	count = 0;
	if (str == NULL)
		return (_putstr("(null)"));
	if (*str)
	{
		count += _putchar(*str);
		count += _putstr(str + 1);
	}
	return (count);
}
