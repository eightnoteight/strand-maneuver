int strcmp(char *p, char *q)
{
	while(*p)
	{
		if (*q == '\0')
			return 1;
		if (*p > *q)
			return 1;
		if (*p < *q)
			return -1;
		p++;
		q++;
	}
	if(*q)
		return -1;
	return 0;
}