#include "strand.h"
#include "strcpy.h"
#include "strcat.h"/*automatically links upto strlen.h*/
char * poi_strcat(char *src1,char *src2)
{
	int srclen1=strlen(src1),srclen2=strlen(src2);
	char *dest;
	dest = (char *)malloc(sizeof(char)*(srclen1+srclen2));
	strcpy(dest,src1);
	strcat(dest,src2);
	return dest;
}