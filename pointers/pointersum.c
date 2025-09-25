#include<stdio.h>
int main()
{
    int  sum =0 ,i;
    int x[5];
    printf("enter value of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    int *ptrsum[5];
    for(i=0;i<5;i++)
    {
        ptrsum[i]= &x[i];
        sum+= *ptrsum[i];
    }
    printf("%d is the sum ", sum);
    return 0;
}








