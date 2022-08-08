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


/**
 * print_oct - prints unsigned ints
 * @c: int
 *
 * Return: octal number
 */

int print_oct(int num)
{
	int octnum = 0, i = 1;
	while (num != 0)
	{
		octnum += (num % 8) * i;
		num /= 8;
		i *= 10;
	}
	return (0);
}

/**
 * print_hexa - prints a number in hexa
 * @num: number to be changes
 * Return: number of base 16 characters
 */

int print_Hexa(unsigned int num)
{
	int c = 0, m, hexa[sizeof(unsigned int) * 8], j = 0, i;

	while (num != 0)
	{
		m = num % 16;

		if (m < 10)
			hexa[j++] = 48 + m;
		else
			hexa[j++] = 55 + m;
		num /= 16;
	}
	for (i = j - 1; i >= 0; i--)
		c += _putchar(hexa[i]);
	return (c);
}


/**
 * print_u - prints an unsigned int
 * @num: unsigned int
 * Return: number of digits to print
 */

int print_u(unsigned int num)
{
	if (num <= 9)
		return (_putchar(num + '0'));
	else
		return (print_u(num / 10) + _putchar(num % 10 + '0'));
}
