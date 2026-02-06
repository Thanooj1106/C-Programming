#include<stdio.h>
void display (int a[],int n);
int main()
{
	int k[]={10,20,30,40,50},i=5;
	display(k,i);
	return 0;
}
void display(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
}
