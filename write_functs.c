#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point
 * Description - '_putchar is used with a local buffer of 1024 to call the
 * write function as little as possible'
 * @c: the character to be printed
 * Return: 1 on sucess, on error -1 is returned an and error number is set
 * appropriately
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int l;

	if (c == -1 || h >= 1024)
	{
		write(1, &buffer, h);
		h = 0;
	}
	if (c != -1)
	{
		buffer[h] = c;
		h++;
	}
	return (1);
}


/**
 * _puts - Entry point
 * Description - 'function prints a string to the stdout'
 * @str: the pointer to the string going to be printed
 * Return: the number of chars writteb
 */

int _puts(char *str)
{
	register int h:

		for (h = 0; str[h] != '\0'; h++)
			_putchar(str[h];
	return (h);
}
