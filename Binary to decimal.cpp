#include<stdio.h>
#include<math.h>

int main() 
{
    int r,dec=0,n;
    
    printf("Enter a Binary Number\n");
    scanf("%d",&n);
    
    for(int i=0;n>0;i++ )
	{
        r=n%10;
        
        dec=dec+(r*pow(2,i));
        
        n=n/10;
    }
    printf("%d",dec);
}
