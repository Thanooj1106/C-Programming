#include<stdio.h>
int main()
{
	int A[20],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for (i=0;i<n;i++)
	    scanf("%d",&A[i]);
	    
	printf("array elements are:\n");
	for (i=0;i<n;i++)
	    printf("%d\t",A[i]);
	
	return 0;
}
