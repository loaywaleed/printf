#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int put_char(char character);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_default(const char *format, int index);

#endif /* MAIN_H */
