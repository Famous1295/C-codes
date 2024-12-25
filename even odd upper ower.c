#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char ch;
	int x,i;

	printf("\nEnter name =>");
	gets(name);
	
	x=strlen(name);
	
	for(i=0;i<x;i++)
	{
		ch=name[i];
	
		if(i%2==0)
		{
			printf("%c",tolower(ch));
	
		}
		else
		{
			printf("%c",toupper(ch));
		}
		
		

	}
}
