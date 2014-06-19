#include "strand.h"
int strncmp(char const *p, char const *q)
{
	while((*p)&&(n--))
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
	if (*q)
		return -1;/* the order matters ! */
	if (n==-1)
		return 0;
}