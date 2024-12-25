#include<stdio.h>

main()
{
	int i,j,n,k=0;
	printf("\nEnter limit =>");
	scanf("%d",&n);
	k=n;
	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
	
}
