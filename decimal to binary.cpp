#include<stdio.h>
#include<math.h>

int main() 
{
    int r,bin=0,n;
    
    printf("Enter a Decimal Number\n");
    scanf("%d",&n);
    
    for(int i=0;n>0;i++) 
	{
        r=n%2;
        
        bin=bin+(r*pow(10,i));
        
        n=n/2;
    }
    printf("%d",bin);
}
