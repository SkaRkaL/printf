#include "main.h"
/**
 * cheeck - cheeck
 * @list: list
 * @c: character
 * Return: int
 */
int cheeck(va_list *list, char c)
{
	int len;

	len = 0;
	if (c == 'c')
		len += _putchar(va_arg(*list, int));
	else if (c == 's')
		len += _putstr(va_arg(*list, char *));
	else if (c == 'p')
		len += _putAddress(va_arg(*list, unsigned long int));
	else if ((c == 'd') || (c == 'i'))
		len += _putnbr(va_arg(*list, int));
	else if (c == 'u')
		len += _putnbr_u(va_arg(*list, unsigned int));
	else if (c == 'u')
		len += _putnbr_u(va_arg(*list, unsigned int));
	else if (c == 'o')
		len += _putnbr_base(va_arg(*list, unsigned int), B8);
	else if (c == 'b')
		len += _putnbr_base(va_arg(*list, unsigned int), B2);
	else if (c == 'S')
		len += _non_printable(va_arg(*list, char *));
	else if (c == 'R')
		len += _prints_rot13(va_arg(*list, char *));
	else if (c == 'r')
		len += _strrev(va_arg(*list, char *));
	else if (c == 'x')
		len += _putnbr_base(va_arg(*list, unsigned int), B16L);
	else if (c == 'X')
		len += _putnbr_base(va_arg(*list, unsigned int), B16U);
	else if (c == '%')
		len += _putchar(c);
	else
	{
		len += _putchar('%');
		len += _putchar(c);
	}
	return (len);
}
/**
 * _printf - printf
 * @format: format
 * Return: len
 */
int _printf(const char *format, ...)
{
	int len, i;
	va_list	list;

	i = -1;
	len = 0;
	va_start(list, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break;
			len += cheeck(&list, format[i + 1]);
			i++;
		}
		else
			len += _putchar(format[i]);
	}
	return (va_end(list), len);
}
