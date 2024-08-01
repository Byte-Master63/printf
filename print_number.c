#include "main.h"

/**
 * print_number - converts an integer to a string
 * @num: the integer to convert
 * Return: result string
 */
char *print_number(int num)
{
	static char buffer[50];
	char *ptr = &buffer[49];
	int is_negative = 0;

	*ptr = '\0';

	if (num == 0)
	{
		*--ptr = '0';
		return (ptr);
	}

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num > 0)
	{
		*--ptr = (num % 10) + '0';
		num /= 10;
	}

	if (is_negative)
	{
		*--ptr = '-';
	}

	return (ptr);
}
