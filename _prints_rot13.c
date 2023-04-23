#include "main.h"
/**
 * _strlen - length of string
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _prints_rot13 - print rot13
 * @str: string
 * Return: int
 */
int	_prints_rot13(char *str)
{
	int count;
	int i;
	char *tmp;

	i = 0;
	count = 0;
	if (str == NULL)
		return (0);
	tmp = malloc(_strlen(str) + 1);
	if (tmp == NULL)
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
