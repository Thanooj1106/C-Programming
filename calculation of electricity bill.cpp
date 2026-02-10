#include<stdio.h>
int main()
{
	int units,bill=0,ns=0,i;
	printf("Enter units:");
	scanf("%d",&units);
	if(units<=100)
	bill=units*1;
	else if(units<=200)
	bill=100*1+(units-100)*2;
	else
	bill=100*1+100*2+(units-200)*3;
	printf("Electricity bill =%d",bill);
	return 0;
}
