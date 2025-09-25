#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n%2==0||n%2==1)
    printf(" % d is a prime no ",n);
    else
    printf(" %d is not a prime no ",n);
}
int main()
{
    int i;
    printf("ENTER NO : ");
    scanf("%d",&i);
    prime(i);
}