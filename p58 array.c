// Online C compiler to run C program online
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
    printf("\nValues\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}

