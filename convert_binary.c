#include "main.h"

/**
 * pin_bin - prints ani unsigned int to binary
 * @c: int to be printed
 * Return: number of base two characterss.
 */

int print_bin(va_list c)
{
	unsigned int a, b, d, add;
	unsigned int e[32];
	int count;

	a = va_arg(c, unsigned int);
	b = 2147483648;
	e[0] = a / b;

	for (d = 1; d < 32; d++)
	{
		b /= 2;
		e[d] = (a / b) % 2;
	}

	for (d = 0, add = 0, count = 0; d < 32; d++)
	{
		add += e[d];
		if (add || d == 31)
		{
			_putchar('0' + e[d]);
			count++;
		}
	}
	return (count);
}	
