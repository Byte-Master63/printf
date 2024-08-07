#include "main.h"
/**
 * carry_integers - Handles the %i specifier
 * @argums: The arguments list
 * @count: The pointer to the character count
 */
void carry_integers(va_list argums, int *count)
{
	int n = va_arg(argums, int);
	int num = n;
	int divisor = 1;
	char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
	}

	while ((num / divisor) > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = (num / divisor) + '0';
		write(1, &digit, 1);
		(*count)++;
		num %= divisor;
		divisor /= 10;
	}
}
