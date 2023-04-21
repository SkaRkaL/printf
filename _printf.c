#include "main.h"

int ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	list;

	i = 0;
	len = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
        {
			if (format[i + 1] == '\0')
				break ;
			else if (format[i + 1] == 'c')
				len += ft_putchar(va_arg(list, int));
			else if (format[i + 1] == 's')
				len += ft_putstr(va_arg(list, char *));
			else if (format[i + 1] == 'p')
				len += ft_putAddress(va_arg(list, unsigned long int));
			else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
				len += ft_putnbr(va_arg(list, int));
			else if (format[i + 1] == 'u')
				len += ft_putnbr_unsigned(va_arg(list, unsigned int));

			else if (format[i + 1] == 'o')                 // for oct -> Task 3
				len += ft_putnbr_base(va_arg(list, unsigned int), B8);
			else if (format[i + 1] == 'b')                 // for binary --> Task 2
				len += ft_putnbr_base(va_arg(list, unsigned int), B2);
			else if (format[i + 1] == 'S')                 // for non_printable_character --> Task 5
				len += ft_non_printable(va_arg(list, char *));
			else if (format[i + 1] == 'R')                 // for rot13 --> Task 14
				len += prints_rot13(va_arg(list, char *));
			else if (format[i + 1] == 'r')                 // for reverse String --> Task 13
				len += ft_strrev(va_arg(list, char *));

			else if (format[i + 1] == 'x')
				len += ft_putnbr_base(va_arg(list, unsigned int), B16L);
			else if (format[i + 1] == 'X')
				len += ft_putnbr_base(va_arg(list, unsigned int), B16U);
			else if (format[i + 1] == '%')
				len += ft_putchar('%');
			else
			{
				len += ft_putchar(format[i]);
				len += ft_putchar(format[i + 1]);
			}
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (len);
}

//----------------------------------------------------//
//                 MAIN   Done ✅
//             Crazy test hhhhhh
//----------------------------------------------------//

int main()
{
    char s[6] = "souha";
    char *sa = "saad";
    char *add = "55";
    char *msg = "This is the best printf daret f 3 days i guess hahahhaha";
    int age = 20;
    int tl = 183;
    char m = 'M';
    int x = 255;
    unsigned int max = 4294967295;

	ft_putnbr(INT_MIN);
	puts("");
	ft_putnbr(INT_MAX);
	puts("");
	puts("\n---------------------------------------------------------");
	printf("{%o}", 41);
	int our = ft_printf("Hello |%s|\nmy name is |%s|\nIm |%dyo|\nand -%c- |%icm|\ni live in %%%%%%\nwith Address |%p|\n& with this code |%x|\nand also |%X|\nu == |%u|\n\n%s\nrevers--> %r\nand ROT13 %R\nbin(98) == %b\nocta %o\n\n", s, sa, age, m, tl, add, x, x, max, msg, "aliahuos", "abc_nop", 98, 41 );
	printf("\nFull LEN Diyalna  =============>> %d\n\n", our);
	puts("---------------------------------------------------------\n");

	                          // Soo All Good i guess hhhh ✔

    return (0);
}
