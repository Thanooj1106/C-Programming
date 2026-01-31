#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	gets(st1);
	gets(st2);
	strcat(st1,st2);
	printf("%s",st1);
	return 0;
}
