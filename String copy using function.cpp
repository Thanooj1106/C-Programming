#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Thanooj";
	char c[20];
	printf("%s\n",name);
	strcpy(c,name);
	printf("%s",c);
	return 0;
}
