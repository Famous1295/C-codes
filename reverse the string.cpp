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

	for(i=x-1;i>=0;i--)
	{
		ch=name[i];
		printf("%c",ch);		
	}
}
