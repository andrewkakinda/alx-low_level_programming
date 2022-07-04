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
	int h; /*hundreds */

	for (h = '0'; h <= '9'; h++)
	{
		for (t = (h + 1); t <= '9'; t++)
		{
			for (i = (t + 1); i <= '9'; i++)
			{
				putchar(h);
				putchar(t);
				putchar(i);
				if (h != '7' || t != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
