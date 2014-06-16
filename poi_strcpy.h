#include "strand.h"
#include "string.h"
char * poi_strcpy(char const *src)
{
	int len = strlen(src);
	char *dest = (char *)malloc(sizeof(char)*(len+1));/*extra byte for null termination*/
	char *p=dest;
	while ((*(p++)=*(src++))!='\0');
	return dest;
}