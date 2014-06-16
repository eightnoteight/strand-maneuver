/*Infact, the below line is unneccessary*/
#include "strand.h"
int strlen(char const *string)
{
	char const *p=string;
	while(*(string++)!='\0');
	return string-p-1;
}