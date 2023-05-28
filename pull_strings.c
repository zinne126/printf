#include "main.h"

/**
 * print_reversed - reverse a function and print a string
 * @arg: argument passed
 * Return: amount of characters printed
 */

int print_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_code_char(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - converts string to rot13
 * @list: string to be converted
 * Return: converted string
 */

int rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_code_char(u[x]);
				break;
			}
		}
		if (x == 53)
			_code_char(str[i]);
	}
	return (i);
}
