#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,m,j,flag=1;
	char st1[20],st2[20];
	scanf("%s",st1);
	scanf("%s",st2);
	n=strlen(st1);
	m=strlen(st2);
	if (n==m)
	{
		for(i=0;i<n;i++)
		{
			if(st1[i]!=st2[i])
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		printf("Strings match");
		else
		printf("Not match");
	}
	else
	printf("Not match size different");
}
