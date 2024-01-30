#include "main.h"

/**
 * print_str - A function that prints int numbers
 * @str: A list of args
 * Return: int
 */
int print_str(char *str)
{
	int i, len;
	/**/
	/*str = va_arg(arg_list, char *);*/

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
	}
	/**/
	return (len);
}

