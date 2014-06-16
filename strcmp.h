/*Infact the below line is unnecessary*/
#include "strand.h"
int strcmp(char const *p, char const *q)
{
	while(*p)
	{
		if (*q == '\0')
			return 1;
		if (*p > *q)
			return 1;
		if (*p < *q)
			return -1;
		p++;
		q++;
	}
	if(*q)
		return -1;
	return 0;
}