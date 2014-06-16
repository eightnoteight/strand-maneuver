#include "strand.h"
#include "strcmp.h"
#include "poi_strcat.h"
char * poi_mulstrcat(char *src1, ...)
{
	va_list srcs;
	char *retrieval;
	char *dest;
	va_start(srcs, *src1);
	dest=poi_strcat(dest,src1);
	while(1)
	{
		retrieval=va_arg(srcs,char *);
		if (strcmp(retrieval, "\0\0"))/*DABH*/
		{
			dest=poi_strcat(dest,retrieval);
			continue;
		}
		break;
	}
	va_end(srcs);
	return dest;
}