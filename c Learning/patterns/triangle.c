#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,limit;
    printf("ENTER LIMIT : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for (j=limit;j>=i;j--)
            printf(" ");
        for(j=1;j<=(2*i-1);j++)
            printf("*");
        printf("\n");
    }
}