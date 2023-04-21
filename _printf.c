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
            else if (format[i + 1] == 'o')
                len += ft_putnbr_base(va_arg(list, unsigned int), B8);
            else if (format[i + 1] == 'x')
                len += ft_putnbr_base(va_arg(list, unsigned int), B16L);
            else if (format[i + 1] == 'X')
                len += ft_putnbr_base(va_arg(list, unsigned int), B16U);
            else if (format[i + 1] == '%')
                len += ft_putchar('%');
			else if (format[i + 1] != 'c' || format[i + 1] != 'i' || format[i + 1] != 'd' || format[i + 1] != 's' || format[i + 1] != 'X' || format[i + 1] != 'x' || format[i + 1] != 'p' || format[i + 1] != 'o')
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
//                 MAIN N__1   Done ✅
//           Crazy test hhhhhh
//----------------------------------------------------//

// int main()
// {
//     char *s = "souha";
//     char *sa = "saad";
//     char *add = "55";
//     char *msg = "This is the best printf daret f 3 days i guess hahahhaha";
//     int age = 20;
//     int tl = 183;
//     char m = 'M';
//     int x = 255;
//     unsigned int max = 4294967295;
//
// 	puts("---------------------------------------------------------");
//     int our = ft_printf("Hello |%s| my name is |%s| \nIm |%dyo| and -%c- |%icm|\n i live in %%%%%% \n with Address |%p| & with this code |%x| and also |%X|\nu == |%u|\n\n%s\n\n", s, sa, age, m, tl, add, x, x, max, msg );
//     printf("\nFull LEN Diyalna  =============>> %d\n\n", our);
// 	puts("---------------------------------------------------------\n");
//     int pur =   printf("Hello |%s| my name is |%s| \nIm |%dyo| and -%c- |%icm|\n i live in %%%%%% \n with Address |%p| & with this code |%x| and also |%X|\nu == |%u|\n\n%s\n\n", s, sa, age, m, tl, add, x, x, max, msg );
//     printf("\nFull LEN Diyalhom =============>> %d\n\n", pur);
// 	puts("---------------------------------------------------------\n");
//
// 	                          // Soo All Good ✔
//
//     return (0);
// }

//---------------------------------------------------------------------------//
//                 MAIN N__2   I guss all Done ✅
//       hada l main Li kayn f ALX  ban liya mazyen same results idk checki tantii 
//---------------------------------------------------------------------------//

// int main()
// {
// 	int len;
//     int len2;
//     unsigned int ui;
//     void *addr;
//
//     len = ft_printf("Let's try to printf a simple sentence.\n");
//     len2 = printf("Let's try to printf a simple sentence.\n");
//     ui = (unsigned int)INT_MAX + 1024;
//     addr = (void *)0x7ffe637541f0;
//     ft_printf("Length:[%d, %i]\n", len, len);
//     printf("Length:[%d, %i]\n", len2, len2);
//     ft_printf("Negative:[%d]\n", -762534);
//     printf("Negative:[%d]\n", -762534);
//     ft_printf("Unsigned:[%u]\n", ui);
//     printf("Unsigned:[%u]\n", ui);
//     ft_printf("Unsigned octal:[%o]\n", ui);
//     printf("Unsigned octal:[%o]\n", ui);
//     ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//     ft_printf("Character:[%c]\n", 'H');
//     printf("Character:[%c]\n", 'H');
//     ft_printf("String:[%s]\n", "I am a string !");
//     printf("String:[%s]\n", "I am a string !");
//     ft_printf("Address:[%p]\n", addr);
//     printf("Address:[%p]\n", addr);
//     len = ft_printf("Percent:[%%]\n");
//     len2 = printf("Percent:[%%]\n");
//     ft_printf("Len:[%d]\n", len);
//     printf("Len:[%d]\n", len2);
//     ft_printf("Unknown:[%r]\n");
//     printf("Unknown:[%r]\n");
//     return (0);
// }

