#include "main.h"

/**
 * print_char - Function that rints characters
 * @arg_list: a list of variadic args
 * Return: 0
 */
int print_char(va_list arg_list)
{
	char arg;

	arg = va_arg(arg_list, int);
	_putchar(arg);

	return (1);
}

