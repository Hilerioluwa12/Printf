#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @op: string to be printed among the line
 * @n: number of integers passed to the function
 */

int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{_putchar('-');
		count = 1;
		n = -n;
	}

	if (n / 10)
		count += print_int(n / 10);
	_putchar(n % 10 + '0');
	count +1;
	return (count);
}
