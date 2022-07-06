#include	<stdio.h>

/**
 * main - print first 50 fibonacci nos
 *
 * Return: always 0
 *
 */
int	main(void)
{
	long a;
	long b;
	int counter;
	int totalCount;

	totalCount = 50;
	a = 1;
	b = 2;

	for (counter = 1; counter <= (totalCount / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (totalCount % 2 == 1)
	{
		printf("%li", a);
	}
	printf("\n");
	return (0);
}
