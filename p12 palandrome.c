#include <stdio.h>
#include <string.h>

int main() 
{
    char str[10];
    int i, len,y;
    printf("\nEnter name =>");
	gets(str);
    
    len = strlen(str);

    for (i=0;i<len;i++) 
    {
        if (str[i]!=str[len-i-1])
		{
            y=1;
        }
    }

    if (y==1)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
        
    return 0;
}
