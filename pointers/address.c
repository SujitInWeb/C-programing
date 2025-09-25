#include<stdio.h>
#include<conio.h>
int main()
{
    int a,*ptr;
    a=10;
    ptr=&a;
    int **parptr=&ptr;
    printf("a =  %d\t",a);
    printf("ptr =%d\t",ptr);
    printf("par ptr = %d\t",*parptr);

}