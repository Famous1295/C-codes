#include<stdio.h>
int main()
{
	int i,j,n,c=1;
	printf("\nEnter limit=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=i;j++)
		{
					printf("%d",c);
					c++;
		}
		printf("\n");	
	}
		
	return 0;
}
