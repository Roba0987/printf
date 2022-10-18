#include "main.h"
/**
 * check_specifiers - check for the conversion specifiers type
 *
 * @format: conversion specifer format
 *
 * Return: pointer to valid function
 */

int (*check_specifiers(const char *format))(va_list)
{
	unsigned int i;

	flag_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	i = 0;
	while (specifiers[i].t != NULL)
	{
		if (*(specifiers[i].t) == *format)
			break;
		i++;
	}

	return (specifiers[i].f);
}

/**
 * _printf - writes output to stdout
 *
 * @format: character string composed of 0 or more directives
 *
 * Return: number of characters printed excluding null bytes
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}
