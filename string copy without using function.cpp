#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Thanooj";
	char c[20];
	int i,n;
	while(name[i]!='\0')
	{
	c[i]=name[i];
	i++;
    }
	printf("%s",c);
	return 0;
}
