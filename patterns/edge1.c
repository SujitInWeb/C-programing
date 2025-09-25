#include<stdio.h>
#include<math.h>
int main()
{
    int i ,j,limit;
    printf("enter the fucking limit :"); 
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
return 0;  
}
