#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n * factorial(n-1);
}
int main()
{
    int i;
    printf("ENTER LIMIT : ");
    scanf("%d",&i);
    printf("factorial upto %d th term is : %d",i,factorial(i));
}