
#include <stdio.h>
#include <stdint.h>

// Description: Reverse bits of a given 32 bits unsigned integer.
// example: Input: n = 00000010100101000001111010011100
//          Output:    964176192 (00111001011110000010100101000000)

uint32_t reverseBits(uint32_t n)
{
	uint32_t rev = 0;
	ssize_t length = sizeof(uint32_t)*8;
	for(int i = 0; i<length;i++)
	{

		rev = rev + ((n&1)<<(length-i-1));
		n >>= 1;
	}
    return rev;
}

int main()
{
	uint32_t n = 43261596;
	printf("the reverse is: %u\n", reverseBits(n));
    return 0;
}
