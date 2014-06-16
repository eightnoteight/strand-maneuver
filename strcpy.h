/*infact, the below line is unnecessary*/
#include "strand.h"
char * strcpy(char *dest, char const *src)
{
	char *p=dest;
	while ((*(p++)=*(src++))!='\0');
	return dest;
}