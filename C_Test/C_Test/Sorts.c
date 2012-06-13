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

//heap

void max_heapify(int *a,int i,int len)
{
	int max=i;
	int l=2*i+1,r=2*i+2;
	if(l<len&&a[max]<a[l])
	{
		max=l;
	}
	if(r<len&&a[max]<a[r])
	{
		max=r;
	}
	if(max!=i)
	{
		int temp=a[i];
		a[i]=a[max];
		a[max]=a[i];
		max_heapify(a,max,len);
	}
}

void build_max_heapify(int *a,int num)
{
	int i;
	for(i=num/2-1;i>=0;i--)
	{
		max_heapify(a,i,num);
	}
}

//quick sort

void quickSort(int *a,int i,int j)
{
	
	int left=i,right=j;
	int pivot=a[left];
	if(i>j)
		return;
	while(left!=right)
	{
		while(left<right&&a[right]>pivot)
		{
			right--;
		}
		if(left<right)
		{
			a[left++]=a[right];
		}
		while(left<right&&a[left]<=pivot)
		{
			left++;
		}
		if(left<right)
		{
			a[right--]=a[left];
		}
	}
	a[left]=pivot;
	quickSort(a,i,left-1);
	quickSort(a,left+1,j);
}