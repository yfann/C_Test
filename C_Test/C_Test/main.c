#include <stdio.h>
char* narmal_reverse(char* s);
char* copy_str(char* s);
int main()
{
	char *a="this is a string";
	char *t,*p;
	t=narmal_reverse(a);
	printf(t);
	getche();
}

char* copy_str(char* s)
{
	char *p,*t,*h;
	int size;
	h=s;

	while(*++h)
	{
		size++;
	}
	p=t=(char*)malloc((size+1)*sizeof(char));
	while(*s)
	{
		*p++=*s++;
	}
	*p='\0';
	return t;
}

char* narmal_reverse(char* s)
{
	char* p=s;
	int size=0;
	char *store,*q;
	while(*++p)
	{
		size++;
	}
	store=(char*)malloc((size+1)*sizeof(char));
	q=store;
	while(p>=s)
	{
		*q++=*--p;
	}
	*q='\0';
	return store;
}