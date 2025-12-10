#include "libft.h"

/*
 * return if a bit at pos is on or off
 * (ex (255,3) = 1)
 *
*/ 
int	get_bit(int value, int pos)
{
	return ((value & (1 << pos)) != 0);
}

/*
	*
	* Take a value and return the value of the bit at is position
	* (ex (255,3) = 8 {0...01000})
	*
	*
*/
int	get_bit_value(int value, int pos)
{
	return (value & (1 << pos));
}

/*
	*
	* Take an int the pos of the first bit target (first mean the most close to 0)
	* and the length is how many bits you want after your first one
	*
	* (ex (256,4,5) will return {10000} so 16)
	*
	*
*/
int	get_bits(int value, int pos, int length)
{
	int k = 0;

	for (int i=0; i < length; i++)
	{
		k |= get_bit_value(value, pos + i);
	}
	k >>= pos;
	return (k);
}

