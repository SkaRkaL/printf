#include "main.h"

///////////////////////////////
////////  FOR TASK 5   ////////
///////////////////////////////


int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	ft_non_printable(char *str) // For Task 5
{
	int	i;
	char	*base = "0123456789ABCDEF";
	int	count = 0;
	                                                            
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
			count += ft_putchar(str[i]);
		else
		{
			count += ft_putstr("\\x");
			count += ft_putchar(base[str[i] / 16]);
			count += ft_putchar(base[str[i] % 16]);
		}
		i++;
	}
	return (count);
}