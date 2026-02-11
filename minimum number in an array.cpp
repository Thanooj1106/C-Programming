#include<stdio.h>
int main()
{
	int A[20],i,n,min=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter Array elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	min=A[0];
	for(i=0;i<n;i++)
	{
		if(min>A[i])
		{
			min=A[i];
		}
	}
	printf("min =%d",min);
	return 0;
}
