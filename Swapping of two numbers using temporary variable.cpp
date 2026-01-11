#include<stdio.h>
int main()
{
	int x,y,T;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	T =x;
	x=y;
	y=T;
	printf("x=%d\ny=%d",x,y);
	return 0;
}
