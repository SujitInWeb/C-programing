#include<stdio.h>
int main()
{
    int i,j,k;
    printf("ENTER LIMIT : ");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j%2);
        printf("\n");
    }
}