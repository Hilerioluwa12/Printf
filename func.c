#include "main.h"
#include <stdarg.h>

/**
 * print_c - function to print character
 * @par: characters to print
 *
 * Return: number of character or -1
 */

int print_c(va_list par)
{
	char character = va_arg(par, int);

	return (_putchar(character));
}

/**
 * print_s - function to print string
 * @par: string to print
 *
 * Return: number of characters to print
 */

int print_s(va_list par)
{
	int ct;
	char *str = va_arg(parameters, char *);

	if (str == NULL)
		str = '(null)';
	for (ct = 0; str[ct] != '\0'; ct++)
		_putchar(str[count]);

	return(ct);
}

/**
 * print_percent - function to print %
 * @par: unused
 *
 * Return: always 1 
 */

int print_percent(__attribute__((unused))va_list par)
{
	char b = '%';
	_putchar(b);

	return (1);
}
