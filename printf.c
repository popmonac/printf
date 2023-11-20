#include "main.h"

/**
 * _printf - This function works like printf
 * @format : identifier to look for
 * Return: integer
*/

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printChar}, {"%s", printS}, {"%%", print37},
		{"%d", print_dec}, {"%i", print_int}, {"%r", print_rev},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[i] == '\0'))
		return (-1);
Here:
	while (format[i] = '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j], id[0] == format[i] && m[j], id[1] == format[i + 1])
			{
				len = len + m[j], f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(formar[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
