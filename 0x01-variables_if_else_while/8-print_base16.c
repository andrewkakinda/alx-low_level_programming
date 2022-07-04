#include	<stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int	main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i >= 'G'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
