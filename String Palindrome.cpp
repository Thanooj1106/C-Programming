#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,flag=1;
	char str[30];
	gets(str);
	n=strlen(str);
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		if (str[i]!=str[j])
		{
			flag=0;
			break;
		}
	}
	if (flag==1)
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}
