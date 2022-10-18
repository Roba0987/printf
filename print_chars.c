#include "main.h"

/**
 * print_char - prints a character
 *
 * @c: character to print
 *
 * Return: Always 1
 */
int print_char(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_str - prints string
 *
 * @s: string to be printed
 *
 * Return: number of characters printed
 */
int print_str(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
