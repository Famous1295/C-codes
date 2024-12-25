#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char ch;
	int x,i,c=0,p;

	printf("\nEnter name =>");
	gets(name);	
	
	p=strlen(name);
	
	printf("Enter the character=>");
	scanf("%c",&x);
	
	for(i=0;i<p;i++)
	{
		ch=name[i];
	
		if(name[i]==x)
		{
			c++;
		}
		
	}
	if(x!=p)
		{
			printf("Sorry Invalid");
		}
	printf("\nCount is  %d",c);
}
