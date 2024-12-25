#include <stdio.h>
#define N 2
#define M 2
#define S 2
int main() {
    
    int a[N][N];
    int b[M][M];
    int s[S][S];
    int i,j;
    printf("1st matrix");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nenter value =>");
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("2nd matrix");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nenter value =>");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    
    printf("\n*****************Values************************\n");
    printf("Matrix 1\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("Sum\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
