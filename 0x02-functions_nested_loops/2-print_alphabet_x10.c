#include	"main.h"

/**
 * print_alphabet_x10 - function to print the lowercase  alphabet 10 times
 *
 * Return: always zero
 *
 */
void	print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
