#include "main.h"

/**
 * str_to_int - converts a string to an integer
 * @str: the string to convert
 * Return: the converted integer
 */
int str_to_int(const char *str)
{
	int result = 0;
	int sign = 1;

	/* Check for a sign */
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}

	/* Convert each character to an integer */
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			break;
		}
		result = result * 10 + (*str - '0');
		str++;
	}

	return (sign * result);
}
