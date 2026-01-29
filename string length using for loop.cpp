#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Thanooj";
	int i,n=0;
	for (i=0;name[i]!='\0';i++)
	n++;
	printf("%d",n);
	return 0;
}
