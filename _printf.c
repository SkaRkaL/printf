#include "main.h"

int _printf(const char *format, ...)
{
	int len;
	int i;
	va_list	list;

	i = 0;
	len = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break;
			else if (format[i + 1] == 'c')
				len += _putchar(va_arg(list, int));
			else if (format[i + 1] == 's')
				len += _putstr(va_arg(list, char *));
			else if (format[i + 1] == 'p')
				len += _putAddress(va_arg(list, unsigned long int));
			else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
				len += _putnbr(va_arg(list, int));
			else if (format[i + 1] == 'u')
				len += _putnbr_u(va_arg(list, unsigned int));
			else if (format[i + 1] == 'o')
				len += _putnbr_base(va_arg(list, unsigned int), B8);
			else if (format[i + 1] == 'b')
				len += _putnbr_base(va_arg(list, unsigned int), B2);
			else if (format[i + 1] == 'S')
				len += _non_printable(va_arg(list, char *));
			else if (format[i + 1] == 'R')
				len += _prints_rot13(va_arg(list, char *));
			else if (format[i + 1] == 'r')
				len += _strrev(va_arg(list, char *));
			else if (format[i + 1] == 'x')
				len += _putnbr_base(va_arg(list, unsigned int), B16L);
			else if (format[i + 1] == 'X')
				len += _putnbr_base(va_arg(list, unsigned int), B16U);
			else if (format[i + 1] == '%')
				len += _putchar('%');
			else
			{
				len += _putchar(format[i + 1]);
			}
			i++;
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (len);
}
