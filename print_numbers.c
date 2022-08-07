#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printint - function to print int
 * @ap: numbers to be printed
 * Return: number of character
 */

int print(va_list ap)
{
	int num = va_arg(ap, int);
	return (_putchar(num));
}

/**
 * print_numbers - function to print numbers
 * @c:
 *
 */
int print_numbers(char c, va_list)
{
	unsigned int x = 0;
	find_format frmmt[] = {
		{'d', printint},
		{'i', printint},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (; frmt[x].spac; x++)
	{
		if (c == frmt[x].spac)
			return (frmt[x].f);
	}
	return (NULL);
}
