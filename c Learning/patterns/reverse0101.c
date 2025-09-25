#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,limit;
    printf("ENTER LIMIT : ");
    scanf("%d",&limit);
    for(i=limit;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
    printf("\n");
    }
}