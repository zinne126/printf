#include "main.h"

/**
 * print_char - prints character
 * @list: list of arguments passed
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	_code_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints string
 * @list: list of arguments passed
 * Return: return amount of characters printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_percent - prints the percent symbol
 * @list: list of arguments passed
 * Return: amount of characters printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_code_char('%');
	return (1);
}

/**
 * print_integer - prints integer
 * @list: list of arguments passed
 * Return: amount of characters printed
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_figures(list);
	return (num_length);
}

/**
 * unsigned_integer - prints unsigned integers
 * @list: List of argumets passed
 * Return: count of the numbers
 */

int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
