// wap to add two no using pointer 
#include <stdio.h>

int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    
    printf("enter 1st no : ");
    scanf("%d",&num1);
    printf("enter 2nd no :");
    scanf("%d",&num2);
    
    ptr1= &num1;
    ptr2= &num2;

    int sum=*ptr1+*ptr2;
    printf("sum of two no : %d",sum);
    
    return 0;
}