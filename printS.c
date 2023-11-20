#include "main.h"

/*
 * printS - This function prints a string
 * #val - agrument
 * Return: The string length
 */

int printS(va_list val)
{
	char *str;
	int s;
	int len;

	str = va_arg(val, char *)
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (s = 0; s < len; s++)
			putchar(str[s]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (s = 0; s < len; s++)
			putchar(str[s]);
		return (len);
	}
