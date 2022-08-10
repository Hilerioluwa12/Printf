#include "main.h"

/**
 * print_spec_chars - convert to special chars
 * @par: argument
 * Return: int
 */

int print_spec_chars(va_list par)
{
	int i, len = 0;
	char *s = va_arg(par, char*);
	unsigned int h;
	char nl[] = "(null)";

	if (!s)
	{
		for (i = 0; nl[i]; i++)
			_putchar(nl[i]);
		return (i);
	}

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar(92);
			_putchar(120);
			len = len + 2;
			h = s[i];
			if (h < 16)
				_putchar(48),
					len++;
<<<<<<< HEAD
			len = len + print_hex(h + 1);
=======
			len = len + print_hex(num, 1);
>>>>>>> 62a8936e3d4b462c6fdca0a8493ff9dec0e42e96
		}

		else
			_putchar(s[i]),
				len++;
	return (len);
}


/**
 * print_rev - prints a string, in reverse
 * @par: string
 * Return: int
 */

int print_rev(va_list par)
{
	int i = 0, len = 0;
	char *s = va_arg(par, char*);
	char nl[] = "(null)";

	if (!s)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);
}
