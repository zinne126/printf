#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_bin(va_list val);
int printf_hex(unsigned long int num);
int printf_FUN(unsigned int num);
int printf_cring(va_list val);
int printf_ZEN(va_list val);
int printf_zen(va_list val);
int printf_onx(va_list val);
int printf_hottie(va_list args);
int printf_pin(va_list val);
int printf_revv(va_list args);
int printf_mis1(va_list args);
int printf_nss(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_55(void);
int printf_top(va_list val);
int printf_up(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
