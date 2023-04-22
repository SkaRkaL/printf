#include "main.h"

///////////////////////////////
////////  FOR TASK 5   ////////
///////////////////////////////


int	_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	_non_printable(char *str) // For Task 5
{
	int	i;
	char	*base = "0123456789ABCDEF";
	int	count = 0;
	                                                            
	i = 0;
	while (str[i] != '\0')
	{
		if (_char_is_printable(str[i]) == 1)
			count += _putchar(str[i]);
		else
		{
			count += _putstr("\\x");
			count += _putchar(base[str[i] / 16]);
			count += _putchar(base[str[i] % 16]);
		}
		i++;
	}
	return (count);
}