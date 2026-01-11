#include<stdio.h>
int main()
{
	int m;
	printf("Enter the marks:");
	scanf("%d",&m);
	if (m>=91&&m<=100)
	printf("S grade");
	else if(m>=81&&m<=90)
	printf("A grade");
	else if(m>=71&&m<=80)
	printf("B grade");
	else if(m>=66&&m<=70)
	printf("C grade");
	else if(m>=61&&m<=65)
	printf("D grade");
	else if(m>=50&&m<=60)
	printf("E grade");
	else
	printf("fail");
	return 0;
}
