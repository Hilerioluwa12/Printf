#include "main.h"

/**
 * get_func - function to find a function pointer
 * @a: specifier to find the correct function
 *
 * Returnn: function pointer
 */
int(*get_func(const char a))(va_list)
{
	unsigned int x = 0;

	format_t structs_pr[] = {
		{'c', print_c},
		{'s', print-s},
		{'%', print_precent},
		{'\0', NULL}
	};

	for (x = 0; structs_pr[x].spc; x++)
	{
		if (a == structs_pr[x].spc)
			return (structs_pr[x].f);
	}

	return (NULL);
}
