char * strncpy(char *dest, char const *src, int n)
{
	char *p=dest;
	while(((*(p++)=*(src++))!='\0')&&(n--));
	while(n--)*p++=0;/*appending with zero's*/
	return dest;
}