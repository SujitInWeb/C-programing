#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,limit;
    printf("Enter Limit : ");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        for(j=0;j<=5;j++)
        if(j==0||j==limit||i==0||i==limit)
            printf("* ");
        else 
            printf("  ");
    printf("\n");
    }
}