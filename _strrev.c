#include "main.h"
/**
 * _strrev - reverse string
 * @s: string
 * Return: int
 */
int	_strrev(char *s)
{
	int	i;
	int	count = 0;
	int	len;
	char	*tmp;

	if (s == NULL)
		return (0);
	i = 0;
	len = _strlen(s) - 1;
	tmp = malloc(len + 1);
	if (!tmp)
		return (0);
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
