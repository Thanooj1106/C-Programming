#include<stdio.h>
#include<string.h>
int main()
{
	int i,U=0,L=0,N=0,SP=0;
	char st[70];
	gets(st);
	for(i=0;st[i] !='\0';i++)
	{
		if (st[i]>='A'&& st[i]<='Z')
		U++;
		else if (st[i]>='a'&&st[i]<='z')
		L++;
		else if (st[i]>='0'&&st[i]<='9')
		N++;
		else
		SP++;
	}
	printf("\nUpper case count =%d",U);
	printf("\nLower case count =%d",L);
	printf("\nNumbers =%d",N);
	printf("\nSpecial characters=%d",SP);
}
