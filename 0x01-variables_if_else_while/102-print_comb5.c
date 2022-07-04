#include	<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int	main(void)
{
	int i;
	int t;

	for (i = 0; i <= 99; i++)
	{
		for (t = i + 1; t <= 99; t++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(t / 10 + '0');
			putchar(t % 10 + '0');

			if (!(i == 98 && t == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
