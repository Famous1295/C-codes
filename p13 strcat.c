#include <stdio.h>
#include <string.h>

int main() 
{
    char name1[100],name2[100];
    printf("\nEnter name =>");
	gets(name1);
	printf("\nEnter name =>");
	gets(name2);
	strcat(name2,name1);
	printf("\nName1 = %s",name1);
	printf("\nName1 = %s",name2);
}
