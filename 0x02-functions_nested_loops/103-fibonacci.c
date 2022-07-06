#include	<stdio.h>
/**
 * main - entry point
 *
 * Return: nothing
 *
 */
int	main(void)
{
	long int a = 1;
	long int b = a;
	long int c = a + b;
	int counter = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
