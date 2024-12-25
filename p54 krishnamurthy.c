#include <stdio.h> 

int main()
{
    int no,r,y=0,cno,f,i;
    
    printf("\nEnter no =>");
    scanf("%d",&no); //789
    cno=no;
    while(no>0) //7
    {
        r=no%10; //7
        
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        
        y=y+f;
        no=no/10; //0
    }
    printf("\nNo = %d and total of fact = %d",cno,y);
    if(cno==y)
    {
        printf("\nNo is krishnamurthy");
    }
    else
    {
        printf("\nNo is not krishnamurthy");
    }
    return 0;
}
