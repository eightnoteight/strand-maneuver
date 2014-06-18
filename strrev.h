#include "string.h"
void swap(char* p,char* q)
{
	char temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void strrev(char* pint)
{
	long long int i,len=strlen(pint);
	for (i = 0; i < len/2; ++i)
		swap(pint+i,pint+len-1-i);
}