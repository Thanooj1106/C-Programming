#include<stdio.h>
int main()
{
	int n,es=0,os=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		es=es+i;
		else
		os=os+i;
	}
	printf("Even sum =%d\n",es);
	printf("Odd sum =%d",os);
	return 0;
}
