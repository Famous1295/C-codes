#include <stdio.h>

main()
{
    FILE *f1,*f2;
    char ch;
    int i=0;
    f1 = fopen("D:\\cprg\\august\\txt file\\abc.txt", "r");
    f2 = fopen("D:\\cprg\\august\\txt file\\pqr.txt","w");
    while (ch != EOF)
	{
		ch=getc(f1);
		
		if(ch==' ')
		{
			int i = 1;
			{
				if (i==1)
				{
					putc(toupper(ch),f2);
					ch=0;
				}
				else
				{
					putc(ch,f2);
				}
			}
		}
		else
		{
			putc(ch,f2);
		}
    }
    fclose(f1);
    fclose(f2);
    printf("\ncopied");
}
