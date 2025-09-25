#include<stdio.h>
#define N 10
void main()
{
    int i,j,n;
    float median ,a[N],t;
    printf("enter the no of items \n");
    scanf("%d",&n);
    printf("input %d values\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            if(a[j]<=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
                else
                continue;
        }
    }
    if(n%2==0)
        median=(a[n/2]+a[n/2+1])/2.0;
    else
        median=a[n/2+1];
    for(i=1;i<=n;i++)
       printf("%f",a[i]);
    printf ("\n the median is=%f",median);
}