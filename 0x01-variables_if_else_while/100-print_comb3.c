#include	<stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 *
 */
int	main(void)
{
	int i; /*represents ones 0-9 */
	int t; /*represents tens 10-19 */

	for (t = '0'; t <= '9'; t++) /*increment the tens */
	{
		for (i = (t + 1); i <= '9'; i++)
		{
			putchar(t);
			putchar(i);

			if (t != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
