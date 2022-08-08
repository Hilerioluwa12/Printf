#include "main.h"

/**
 * print_hexdec - prints the octal representation of a decimal number
 * @par: argument
 *
 * Return: number of characters printed
 */

int print_hexdec(va_list par)
{
	int j = 0;
	unsigned int num = va_arg(par, unsigned int);
	int arr[sizeof(int) * 16 + 1];
	int i = 0;

	if (num < 16)
	{
		_putchar(num + '0');
		j++;
		return (j);
	}

	else
	{
		while (num > 16)
		{
			arr[i] = num % 16;
			num /= 16;
			i++;
		}

		if (num < 16)
			arr[i] = num;

		while (i >= 0)
		{
			_putchar(arr[i] + '0');
			j++;
			i--;
		}
	}
	return (j);
}
