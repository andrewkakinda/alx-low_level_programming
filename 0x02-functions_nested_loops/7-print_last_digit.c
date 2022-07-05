#include	"main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @i: is the digit to compare
 *
 * Return: value of last digit
 *
 */
int	print_last_digit(int i)
{
	_putchar(i % 10);
	return (i % 10);
}
