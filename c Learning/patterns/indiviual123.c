#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k=1,limit;
    printf("ENTER LIMIT : ");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",k);
            k++;

        }
        printf("\n");
    }
return 0;
}