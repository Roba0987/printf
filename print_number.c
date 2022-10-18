#include "main.h"

/**
 *print_int - prints integers
 *
 *@i: integer to be printed
 *
 *Return: number of digits printed
 */
int print_int(va_list i)
{
	int digits[10];
	int j, zero_remover, num, count, divisior
		num = va_arg(i, int);
	count = 0;
	divisior = 1000000000;
	digits[0] = num / divisior;
	for (j = 1; j < 10; j++)
	{
		divisior /= 10;
		digits[j] = (num / divisior) % 10;
	}
	if (num < 10)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			digits[j] *= -1;
	}
	for (j = 0, zero_remover = 0; j < 10; j++)
	{
		zero_remover += digits[j];
		if (zero_remover != 0 || j == 9)
		{
			_putchar('0' + digits[j])
;
			count++;
		}
	}

	return (count);
}
