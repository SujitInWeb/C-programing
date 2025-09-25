#include <stdio.h>

int main()
{
    int num1,num2,mult,sum,sub;
    float divide;
    printf("Enter the number : \n ");
    scanf("%d",&num1);
    printf("Enter the number : \n ");
    scanf("%d",&num2);
    char operator;
    printf("enter the type of operation ( + , - , / , * )");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        sum= num1+num2;
        printf("sum of two numbers =%d",sum);
        break;
    case '-':
        sub= num1-num2;
        printf("difference of the two numbers =%d",sub);
        break;
    case '/':
        divide= num1/num2;
        printf("the quotient of the two numbers is =%f",divide);
        break;
    case '*':
        mult= num1*num2;
        printf("the product of two no =%d",mult);
        break;

    
    default:
        printf("operation type error");
        break;
    }

    return 0;
}