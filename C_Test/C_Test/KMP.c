//匹配字符串 常规方法
int normal_match(char *source,char *pattern)
{
	int pos=0,i=0;
	while(source[pos+i]!='\0'&&pattern[i]!='\0')
	{
		if(source[pos+i]==pattern[i])
		{
			i++;
		}
		else
		{
			pos++;
			i=0;
		}
	}
	if(pattern[i]=='\0')
	{
		return pos;
	}
	else
	{
		return -1;
	}
}
//KMP方法

