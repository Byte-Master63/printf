#include "main.h"

void handle_specifier(const char *format, va_list argums, int *count, int *i);
void write_char(char c, int *count);

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argums;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(argums, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			handle_specifier(format, argums, &count, &i);
		}
		else
		{
			write_char(format[i], &count);
		}
		i++;
	}
	va_end(argums);
	return (count);
}

/**
 * handle_specifier - handles the format specifier
 * @format: character string
 * @argums: argument list
 * @count: pointer to the character count
 * @i: pointer to the current position in the format string
 */
void handle_specifier(const char *format, va_list argums, int *count, int *i)
{
	if (format[*i] == 'c')
	{
		carry_chars(argums, count);
	}
	else if (format[*i] == 's')
	{
		carry_strings(argums, count);
	}
	else if (format[*i] == '%')
	{
		write(1, "%", 1);
		(*count)++;
	}
	else
	{
		write(1, "%", 1);
		write(1, &format[*i], 1);
		(*count) += 2;
	}
}

/**
 * write_char - writes a character to stdout
 * @c: character to write
 * @count: pointer to the character count
 */
void write_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
