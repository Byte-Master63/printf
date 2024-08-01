#include "main.h"

/**
 * carry_chars - handles the %c format specifier
 * @argums: the argument list
 * @count: pointer to the character count
 */
void carry_chars(va_list argums, int *count)
{
	char c = va_arg(argums, int);

	write(1, &c, 1);
	(*count)++;
}
