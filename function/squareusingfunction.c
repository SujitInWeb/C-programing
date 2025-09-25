#include<stdio.h>
#include<math.h>
void power(int n, int *number);
int main()
{
    int i,square;
    printf("enter the integer :");
    scanf("%d",&i);
    power(i,&square);
    return 0;
}
void power(int n ,int *number)
{
    *number = n * n;
    printf("square of %d=%d",n,*number);
}