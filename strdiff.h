#include "strand.h"
#include "strlen.h"
long long int strdiff(char *stra,char *stre)
{
	long long int diff=0,i=0,lena=strlen(stra),lene=strlen(stre),pint=lena,pont=lene;
	while(pint--)
		tolower(*(stra+pint));/*tolower is from ctype.h but not from the string.h*/
	while(pont--)
		tolower(*(stre+pont));
	while(i<lena&&i<lene)
		diff+=*(stra+i)-*(stre+(i++));
	while(i<lena)
		diff+=*(stra+(i++))-'a'+1;
	while(i<lene)
		diff+=*(stre+(i++))-'a'+1;
	return diff;
}