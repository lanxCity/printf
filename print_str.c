#include "main.h"

/**
 * print_strings - A function that prints int numbers
 * @arg_list: A list of args
 * Return: int
 */
int print_strings(va_list arg_list)
{
	int i, len;
	char *str;
	/**/
	str = va_arg(arg_list, char *);

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

