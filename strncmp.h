#include "strand.h"
int strncmp(char *left, char *right, int n)
{
	while(*left && n--)
	{
		if (*right=='\0')
			return 1;
		if (*right>*left)
			return -1;
		if (*right<*left)
			return 1;
		right++;
		left++;
	}
	if (*right && n)
		return -1;
	return 0;
}