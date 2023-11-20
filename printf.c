#include "main.h"

/**
 * _printf - fThis function works like printf
 * @format : identifier to look for
 * Return: integer
*/

int _printf(const char *format, ...)
{
        match m[] = {
          {"%c", printChar}, {"%s", printS}, {"%%", print37}, 
          {"%d", print_dec}, {"%i", print_int}, {"%r", print_rev}, 
          {"%R", print_rot13},  {"%b", print_bin},  
          {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex},
          {"%",}
        }
}