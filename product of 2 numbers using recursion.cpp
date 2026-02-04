#include<stdio.h>
int product(int x,int y)
{
	if (y==0)
	return 0;
	else
	return (x+product(x,y-1));
}
int main()
{
	int x,y;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	printf("x product y=%d",product(x,y));
	return 0;
}
