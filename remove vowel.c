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
	
	for(i=100;i>=x;i--)
	{
		ch=name[i];
		printf("%c",name[x-1]);

	}
}
