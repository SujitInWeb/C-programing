#include<stdio.h>
#include<conio.h>
void compare(int a,int b,int c,int *large,int *mid ,int *low);
int main()
{
    int i,j,k,large,mid,low;
    printf("enter the integers : ");
    scanf("%d",&i);
    printf("enter the integers : ");
    scanf("%d",&j);
    printf("enter the integers : ");
    scanf("%d",&k);

    compare(i,j,k, &large, &mid, &low);
    printf("Max = %d\n", large);
    printf("Mid = %d\n", mid);
    printf("Min = %d\n", low);
    return 0;
}

void compare(int a, int b, int c, int *large, int *mid, int *low)
{
    if (a > b && a > c)
    {
        *large = a;
        if (b > c)
        {
            *mid = b;
            *low = c;
        }
        else
        {
            *mid = c;
            *low = b;
        }
    }
    else if (b > a && b > c)
    {
        *large = b;
        if (a > c)
        {
            *mid = a;
            *low = c;
        }
        else
        {
            *mid = c;
            *low = a;
        }
    }
    else if (c > a && c > b)
    {
        *large = c;
        if (a > b)
        {
            *mid = a;
            *low = b;
        }
        else
        {
            *mid = b;
            *low = a;
        }
    }
}