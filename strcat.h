#include "strand.h"
#include "strlen.h"
char * strcat(char * dest, char const * src)
{
	int i=strlen(dest),j=strlen(src),k=-1;
	while((++k)<j)
		*(dest+i+k)=*(src+k);
	*(dest+i+k)='\0';
	return dest;
}