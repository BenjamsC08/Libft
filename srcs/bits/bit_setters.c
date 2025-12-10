#include "libft.h"

void	turn_off_bit(int *ptr, int pos)
{
	*ptr &= ~(1 << pos);
}

void	turn_off_bits(int *ptr, int start_pos, int length)
{
	for (int i=0; i < length; i++)
	{
		turn_off_bit(ptr, start_pos + i);
	}
}

void	turn_on_bit(int *ptr, int pos)
{
	int k = 1 << pos;

	*ptr |= k;
}

void	turn_on_bits(int *ptr, int start_pos, int length)
{
	for (int i=0; i < length; i++)
	{
		turn_on_bit(ptr, start_pos + i);
	}
}

