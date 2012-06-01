#include <stdio.h>
char* narmal_reverse(char* s);
char* copy_str(char* s);
char* swap_reverse(char* s);
char* xor_reverse(char* s);
void reverse(char *left,char *right);
char* word_reverse(char *s);
int main()
{
	char *a="this is a string";
	char *t,*p;
	//t=narmal_reverse(a);
	t=copy_str(a);
	//t=swap_reverse(t);
	//t=xor_reverse(t);
	t=word_reverse(t);
	printf(t);
	getche();
}

char* copy_str(char* s)
{
	char *p,*t,*h;
	int size=0;
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
	int size=0,temp=0;
	char *store,*q;
	while(*++p)
	{
		size++;
	}
	store=(char*)malloc((size+1)*sizeof(char));
	q=store;
	while(p>s)
	{
		*q++=*--p;
	}
	*q='\0';
	return store;
}

char* swap_reverse(char* s)
{
	char *left,*right;
	char temp='a';
	left=right=s;
	while(*++right){}
	right--; //to the string end from \0
	while(right>left)
	{
		temp=*right;
		*right=*left;
		*left=temp;
		right--;
		left++;
	}
	return s;
}

char* xor_reverse(char* s)
{
	char *left,*right;
	left=right=s;
	while(*right)
	{
		right++;
	}
	right--;

	while(right>left)
	{
		*left=*right^*left;
		*right=*right^*left;
		*left=*right--^*left++;
	}
	return s;
}

void reverse(char *left,char *right)
{
	char temp='a';
	while(right>left)
	{
		temp=*right;
		*right--=*left;
		*left++=temp;
	}
}

char* word_reverse(char *s)
{
	char *tag,*p;
	tag=p=s;
	while(*p)
	{
		if(*p==' ')
		{
			reverse(tag,p-1);
			tag=++p;
		}
		else
		{
			p++;
		}
	}
	reverse(tag,p-1);
	reverse(s,p-1);
	return s;
}