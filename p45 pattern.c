#include<stdio.h>
int main() {
    
    int i,n,j,k=1;
    printf("\nEnter limit =>");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)//12
    {
        for(j=n;j>=i;j--)//54321 5432
        {
            printf("%d",k);
			k++;
        }
        printf("\n");
    }
    return 0;
}
