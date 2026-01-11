#include<stdio.h>
int main()
{
	float pi,r,A;
	printf("Enter pi,r:");
	scanf("%f%f",&pi,&r);
	A = pi*r*r;
	printf("A = %.2f",A);
	return 0;
}
