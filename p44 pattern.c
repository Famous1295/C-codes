#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("\nEnter limit=>");
	scanf("%d",&n);
	c=n;
	for(i=1;i<=n;i++)
	{
			c=n;
			for(j=1;j<=i;j++)
		{
					printf("%d",c);
					c--;
		}
		printf("\n");	
	}
		
	return 0;
}
