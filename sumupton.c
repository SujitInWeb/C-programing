#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,limit;
    printf("ENTER LIMIT : ");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        sum=sum+i;
    } 
    printf("SUMMATION UPTO %d TH TERM IS : %d ",limit,sum);
return 0;
}