#include	"main.h"
/**
 * print_times_table - multiplication table upto n
 * @n: integer given as argument
 */
void	print_times_table(int n)
{
	int col, row, prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				if (col == 0)
				{
					_putchar('0' + prod);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else	if (prod > 9 && prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else	if (prod >= 100)
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + (prod / 100) % 10);
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
