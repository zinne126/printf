#include "main.h"

/**
 * printf_mis1 - print a string to MIS1 encoding
 * @args: arguments for printf
 *
 * Return: number of characters printed
 */
int printf_mis1(va_list args)
{
    int i, j, counter = 0;
    int k;
    char s = va_arg(args, char);
    char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    if (s == NULL)
        s = "(null)";
    for (i = 0; s[i] != '0'; i++)
    {
        k = 0;
        for (j = 0; alpha[j] != '0' && !k; j++)
        {
            if (s[i] == alpha[j])
            {
                _putchar(beta[j]);
                counter++;
                k = 1;
            }
        }
        if (!k)
        {
            _putchar(s[i]);
            counter++;
        }
    }
    return (counter);
}
