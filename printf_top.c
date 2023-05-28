#include "main.h"

/**
 * printf_top - prints a top.
 * @val: arguments.
 * Return: 1.
 */
int printf_top(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
