#include <stdio.h>

main()
{
    FILE *f1,*f2;
    char ch;
    f1 = fopen("D:\\cprg\\august\\txt file\\abc.txt", "r");
    f2 = fopen("D:\\cprg\\august\\txt file\\pqr.txt","w");
    while (ch != EOF)
	{
		ch=getc(f1);
		if(ch=='U'||ch=='O'||ch=='I'||ch=='E'||ch=='A'||ch=='u'||ch=='o'||ch=='i'||ch=='e'||ch=='a')
		{
			
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