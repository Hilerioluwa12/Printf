#ifndef _MAIN_H
#define _MAIN_H

#define BUFSIZE 1024

/* importing libraries */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Definition of type */

/**
 * struct format - structure for printing various types
 * @spac: type to print
 * @f: function to print
 */

typedef struct  format
{
	const char spac;
	int (*f)(va_list);
} format_t;

/* Function prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list par);
int print_s(va_list par);
int print_percent(__attribute__((unused))va_list par);
int (*get_func(const char a))(va_list);
<<<<<<< HEAD
int print_numbers(char c, va_list);
int print(va_list ap);

=======
void print_numbers(char *op,unsigned int n, ...);
int print_integer(va_list par);
int print_decimal(va_list par);
<<<<<<< HEAD
>>>>>>> new_branch
=======
int print_bin(va_list c);
int print_oct(int num);
int print_u(unsigned int num);
int print_Hexa(unsigned int num);
int print_hex(unsigned int num);
int print_rev(va_list par);
int print_spec_chars(va_list par);

>>>>>>> branch_new
#endif
