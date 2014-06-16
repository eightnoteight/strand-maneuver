/*Infact the below line is unnecessary*/
#include "strand.h"
inline int e_strcmp(char const *p, char const *q)
{
	while(*p)
	{
		if (*q == '\0')
			return *p - *q;
		if (*p > *q)
			return *p - *q;
		if (*p < *q)
			return *p - *q;
		p++;
		q++;
	}
	if (*q)
		return *p - *q;
	return 0;
}