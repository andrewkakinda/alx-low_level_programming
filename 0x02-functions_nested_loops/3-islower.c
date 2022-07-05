#include	"main.h"

/**
 *_islower -  func checks if i is lowercase
 *
 *@i: character to compare
 *
 * Return: 1 if true and 0 if false
 *
 */
int	_islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	return (0);
}
