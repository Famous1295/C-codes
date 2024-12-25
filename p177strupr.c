#include<stdio.h>
#include<conio.h>
main()
{
	char name[100];
	printf("Enter name=");
	gets(name);
	printf("%s",strupr(name));
}
