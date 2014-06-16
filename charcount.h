#include "strand.h"
int charcount(char z, char* in)
{
	int c=0;
	while(*in)
		if (z==*(in++))
			c++;
	return 0;
}