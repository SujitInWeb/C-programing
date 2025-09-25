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
        for(j=1;j<=(2*i-1);j++)
        printf("*");
        printf("\n"); 
    }
    for(i=limit+1;i>=0;i--)
    {
        for(j=i;j<=limit;j++)
        printf(" ");
        for(j=1;j<=(2*i-1);j++)
            printf("*");
        printf("\n");
    }
}