#ifndef MAIN
#define MAIN
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);

/**
 * struct printer - printer
 *
 * @type: type
 * @print: print function
 */
typedef struct printer
{
	char *type;
	int (*print)(va_list);
} PRINTER;

#endif
