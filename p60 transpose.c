#include <stdio.h>
#define N 2
int main() {
    
    int a[N][N];
    int i,j;
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nenter value =>");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\Matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\Transpose Matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
        	if(i==j)
        	{
			
            	printf("%d ",a[j][i]);
        	}
        	else
        	{
        		printf("*");
			}
        }
        printf("\n");
    }    
    

    return 0;
}

