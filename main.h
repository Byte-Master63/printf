#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void carry_decimals(va_list argums, int *count);
void carry_integers(va_list argums, int *count);
int _printf(const char *format, ...);
char *convert(unsigned long int num, int base, int lowercase);
void handle_numbers(va_list args, int *count);
char *print_number(int num);
void carry_chars(va_list argums, int *count);
void carry_strings(va_list argums, int *count);
void handle_specifier(const char *format, va_list argums, int *count, int *i);
void write_char(char c, int *count);

#endif
