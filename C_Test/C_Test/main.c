#include <stdio.h>
char* narmal_reverse(char* s);
char* copy_str(char* s);
int main()
{
	char *a="this is a string";
	char *t,*p;
	int tt=5;
	t=(char*)malloc(tt);

	while(tt-->0)
	{
		*t--='s';
	}
	printf(t);

	getche();
}

char* copy_str(char* s)
{
	char *p;
	p=(char*)malloc(16);
	while(*s)
	{
		*p++=*s++;
	}
	return p;
}

char* narmal_reverse(char* s)
{
	char* p=s;
	int size=0;
	char *store;
	char *q;
	while(*++p)
	{
		size++;
	}
	store=(char*)malloc((size+1)*sizeof(char));
	q=store;
	while(p>=s)
	{
		*q++=*p--;
	}
	*q='\0';
	return store;
}