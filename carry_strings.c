#include "main.h"

/**
 * carry_strings - handles string format specifier
 * @argums: the argument list
 * @count: pointer to the character count
 */
void carry_strings(va_list argums, int *count)
{
	char *str = va_arg(argums, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		write(1, str, 1);
		str++;
		(*count)++;
	}
}
