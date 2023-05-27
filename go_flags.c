#include "main.h"

/**
  * go_flags - Entry point
  * Description - 'checking for valid flag specifiers'
  * @s: holds the flag specifier
  * @f: pointer to the struct flags in which flags are checked
  * Return: 1 if flag is turned on or noticed, and 0 otherwise
  */

int go_flags(char s, flags_ty, *f)
{
	int l = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			l = 1;
			break;
		case ' ':
	        	f->space = 1;
			l = 1;
			break;
		case '#':
			f->hash = 1;
			l = 1;
			break;
	}

	return (l);
}
