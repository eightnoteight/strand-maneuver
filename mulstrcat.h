#include "strand.h"
#include "strcmp.h"
#include "strcat.h"
char * mulstrcat(char *dest, ...)
{
	va_list strs;
	char *retrieval;
	va_start(strs, *dest);
	while(1)
	{
		retrieval=va_arg(strs,char *);
		if (strcmp(retrieval,"\0\0"))/*"\0\0" is the terminating string*/
		{							 /*so if you want to concatenate
									  "\0\0" string, do it in two strings
									   i.e "\0" and "\0"
									 */
			strcat(dest,retrieval);
			continue;		
		}
		break;
	}
	va_end(strs);
	return dest;
}