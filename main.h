#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flag - differnet flags used to differentiate data types
 *
 * @t: type of flag
 * @f: function used to print
 *
 */
typedef struct flag
{
	char *t;
	int (*f)(va_list);
} flag_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_int(va_list i);

#endif /* MAIN_H */
