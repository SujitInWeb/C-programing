#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,limit;
    printf("enter limit : ");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        for(j=limit;j>=i;j--)
            printf(" ");
            printf("*");
        for(j=0;j<=i-1;j++)
            printf(" ");
        for(j=0;j<=i-1;j++)
            printf(" ");
            printf("*");
        printf("\n");       
    }
    for(i=1;i<=limit;i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");
            printf("*");
        for(j=limit-1;j>=i;j--)
            printf(" ");
        for(j=limit-1;j>=i;j--)
            printf(" ");
            printf("*");
        printf("\n");
    }
}