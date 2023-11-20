#include "main.h"

/*
 * printChar - This function prints a Character
 * @val : arguments.
 * Return: 1
 *
 */

int printChar(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
