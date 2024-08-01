#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void carry_chars(va_list argums, int *count);
void carry_strings(va_list argums, int *count);
void handle_specifier(const char *format, va_list argums, int *count, int *i);
void write_char(char c, int *count);

#endif
