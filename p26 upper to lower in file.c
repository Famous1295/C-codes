#include <stdio.h>

main()
{
    FILE *f1;
    char ch;
    int i = 0; 
    f1 = fopen("d:\\abc.txt", "r");
    while (ch != EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			printf("%c",ch);
		}
        if (i % 2 == 0) 
		{
            printf("%c", toupper(ch));
        } 
		else if(i%2!=0)
		{
            printf("%c", tolower(ch));
        }
        i++;
    }
    fclose(f1);
    return 0;
}
