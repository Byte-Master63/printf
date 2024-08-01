#include "main.h"

/**
 * handle_specifier - Processes format specifiers and calls the appropriate function
 * @format: The format string
 * @argums: Variable arguments
 * @count: Pointer to character count
 * @i: Pointer to current index in format string
 */
void handle_specifier(const char *format, va_list argums, int *count, int *i)
{
	char specifier = format[*i + 1];

	switch (specifier)
	{
	case 'd':
	case 'i':
		carry_numbers(argums, count);
		break;
	default:
		write_char(format[*i], count);
		write_char(specifier, count);
		break;
	}

	(*i)++;
}
