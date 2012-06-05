//bubble
int* BubbleSort(int* a,int len)
{
	int* s;
	int* m;
	int* e;
	int loop=len-1;
	s=m=e=a;
	while(--len>0)
	{
		e++;
	}
	while(m<e)
	{
		while(m<e)
		{
			if(*m>*(m+1))
			{
				int temp=*m;
				*m=*(m+1);
				*(m+1)=temp;
			}
			m++;
		}
		m=s;
		e--;
	}
	return s;
}