#include<stdio.h>
int main()
{
	int w=1,i;
	char str[100];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		w++;
	}
	printf("The count of words is %d",w);
	return 0;
}
