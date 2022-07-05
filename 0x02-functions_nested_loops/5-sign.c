#include	"main.h"

/**
 * print_sign - prints a sign of a number
 *
 * @n: is the number to be compared
 *
 * Return: 1 if greater than 0, 0 if equal 0, -1 if less than 0
 *
 */
int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar ('-');
	return (-1);
}
