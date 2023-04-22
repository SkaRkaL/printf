#include "main.h"

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	_prints_rot13(char *str) // Task 14
{
	int count = 0;
	int i = 0;
	char *tmp;
	if(str == NULL)
		return (0);
	tmp = malloc(_strlen(str) + 1);
	if(tmp == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			tmp[i] = str[i] + 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			tmp[i] = str[i] - 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			tmp[i] = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			tmp[i] = str[i] - 13;
		else
			tmp[i] = str[i];
		count += write(1, &tmp[i], 1);
		i++;
	}
	tmp[i] = '\0';
	free(tmp);
	return (count);
}


int	_strrev(char *s) // Task 13
{
	int	i;
	int	count = 0;
	int	len;
	char	*tmp;

	if(s == NULL)
		return(0); 
	i = 0;
	len = _strlen(s) - 1;
	tmp = malloc(len + 1);
	if(!tmp)
		return(0); 
	while (s[i])
	{
		tmp[i] = s[len];
		i++;
		len--;
	}
	count += _putstr(tmp);
	free(tmp);
	return (count);
}
