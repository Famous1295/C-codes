#include <stdio.h>

main()
{
    FILE *f1,*f2,*f3;
    char ch1,ch2;
    f1 = fopen("D:\\cprg\\august\\txt file\\abc.txt","r");
    f2 = fopen("D:\\cprg\\august\\txt file\\pqr.txt","r");
    f3 = fopen("D:\\cprg\\august\\txt file\\xyz.txt","w");
    while (ch1 != EOF)
	{
		ch1=getc(f1);
		putc(ch1,f3);
    }
    while (ch2 != EOF)
    {
    	ch2=getc(f2);
    	putc(ch2,f3);
	}
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("\ncopied");
}
