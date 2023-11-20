#include "main.h"

/**
 * _strlen - This function is for len
 * @str :a string pointer
 * Return :1
 */


int _strlen(char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		j;
	return (j);
}

/**
 * _strlenc - This function is for char pointer
 * @str : char pointer
 * Return :1
 */

int _strlenc(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		j;
	return (j);
}
