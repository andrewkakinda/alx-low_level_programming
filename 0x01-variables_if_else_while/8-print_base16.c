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
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (a = 'A'; a >= 'G'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
