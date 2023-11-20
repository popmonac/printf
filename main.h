#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int print_int(va_list args);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_unsigned(va_list args);
int print_bin(va_list val);
int print_dec(va_list args);
int printChar(va_list val);
int strlen(char *str);
int strlenc(const char *str);
int printS(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int print37(void);
#endif
