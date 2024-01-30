#include "main.h"

/**
 * _printf - A custom printf function
 * @format: A formatted string
 * @...: Varaidic args
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i, p_count, new_strlen;
	char *new_str;

	p_count = 0;

	/*Start with the first arg*/
	va_start(arg_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;

			if (format[i + 1] == 'c')
			{
				print_char(va_arg(arg_list, int));
				p_count++;
			}
			else if (format[i + 1] == 's')
			{
				new_str = va_arg(arg_list, char *);
				new_strlen = print_str(new_str);

				p_count += new_strlen;
			}
			else if (format[i + 1] == '%')
			{
				print_perc(37);
			}
		}

		p_count++;
	}

	return (p_count);
}
