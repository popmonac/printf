include "main.h"

/* 
 * printInt : This function prints a integer
 * @args : arguments.
 * Return: 1
 *
 */
 
 int print_int(va_list args)
 {
    int n = va_arg(args, int);
    int number, last = n % 10, digit, exp = 1;
    int j = 1;

    n = n / 10;
    number = n;

    if (last < 0)
    {
        _putchar('-');
        number = -m;
        n = -n;
        last = -last;
        j++;
    }

    if (number > 0)
    {
        while (number / 10 != 0)
        {
            exp = exp * 10;
            number = number / 10;
        }
        number = n;
        while (exp > 0)
        {
            digit = number / exp;
            _putchar(digit + '0');
            number = number - (digit * exp);
            exp = exp / 10;
            j++;
        }
    }
    _putchar(last + '0')

    return (j);
 }

 include "main.h"

/* 
 * printInt : This function prints a integer
 * @args : arguments.
 * Return: 1
 *
 */
 
 int print_dec(va_list args)
 {
    int n = va_arg(args, int);
    int number, last = n % 10, digit, exp = 1;
    int j = 1;

    n = n / 10;
    number = n;

    if (last < 0)
    {
        _putchar('-');
        number = -m;
        n = -n;
        last = -last;
        j++;
    }

    if (number > 0)
    {
        while (number / 10 != 0)
        {
            exp = exp * 10;
            number = number / 10;
        }
        number = n;
        while (exp > 0)
        {
            digit = number / exp;
            _putchar(digit + '0');
            number = number - (digit * exp);
            exp = exp / 10;
            j++;
        }
    }
    _putchar(last + '0')

    return (j);
 }