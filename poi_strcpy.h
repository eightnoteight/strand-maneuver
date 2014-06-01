#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int srclen(char const *src)
{
	char const *p=src;
	while((*p!='\0')&&(*p!='\n')&&(*p!=0))p++;
	return p - src;
}
char * poi_strcpy(char const *src)
{
	int len = srclen(src);
	char *dest = (char *)malloc(sizeof(char)*(len+1));/*extra byte for null termination*/
	memcpy(dest,src,len+1);/*one interesting aspect is that memcpy can be used for any array*/
	return dest;
}