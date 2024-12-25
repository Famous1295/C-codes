#include <stdio.h>
#include <string.h>

int main() 
{
    char name1[100];
    printf("\nEnter name=>");
    gets(name1);
    printf("%s",strrev(name1));
	
}
