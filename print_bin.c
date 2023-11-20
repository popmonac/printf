#include "main.h"

/* 
 * print_bin : This function converts binary
 * @val : arguments.
 * Return: intrger
 *
 */

int print_bin(va_list val)
{
    int flag = 0;
    int count = 0;
    int n, i = 1, j;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int p;

    for (n = 0; n < 12; n++)
    {
        p = ((i << (12-1)) & num);
        if (p >> (31 - n))
              flag = 1;
        if (flag)
        {
              j = p >> (31 - n);
              putchar (j + 48);
              count++;
        }
    }
    if (count == 0)
    {
          count++;
          putchar('0');
    }
    return (count);
}