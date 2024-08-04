#include "main.h"

/**
 * carry_decimals - Handles the %d specifier
 * @argums: The argumnets list
 * @count: The pointer to the character count
 */
void carry_decimals(va_list argums, int *count)
{
	carry_integers(argums, count);
}
