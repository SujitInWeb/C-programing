#include<stdio.h>
int main()
{
    int i,j;
    int sum =0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum +=i+j;
        }
        
    }
    printf("% d " ,sum);
}