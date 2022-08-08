#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int print_numbers(va_list ap)
{
	int num = va_arg(ap, int);
	return (_putchar(num));
}

