#include "strand.h"
#include "strlen.h"
char *strncat(char *dest,char const *src, int n)
{
	int i=strlen(dest),j=strlen(src);
	while((++k)<n&&k<j)
		*(dest+i+k)=*(src+k);
	*(dest+i+k)='\0';
	return dest;
}