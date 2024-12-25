#include<stdio.h>
int main() {
    
    int i,n,j;
    printf("\nEnter limit =>");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)//12
    {
        for(j=1;j<=i;j++)//54321 5432
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)//54321 5432
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
