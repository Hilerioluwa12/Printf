#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list par);
int print_s(va_list par);
int print_percent(__attribute__((unused))va_list par);
int (*get_func(const char a))(va_list);

#endif
