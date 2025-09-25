//wap to calculate loan using switch case //
#include<stdio.h>
#include<math.h>
int main()
{
    float a,interest,total;
    int b;
    printf("ENTER PRINCIPAL : ");
    scanf("%f",&a);
    printf("ENTER TIME PERIOD : ");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
        interest= (a*b*5)/100;
        total=a+interest;
        printf("AMOUNT : %f",total);
        break;
    case 2:
        interest= (a*b*7)/100;
        total=a+interest;
        printf("AMOUNT : %f",total); 
        break;
    case 3:
        interest= (a*b*8)/100;
        total=a+interest;
        printf("AMOUNT : %f",total); 
        break;
    case 4:
        interest= (a*b*9)/100;
        total=a+interest;
        printf("AMOUNT : %f",total); 
        break;
    case 5:
        interest= (a*b*10)/100;
        total=a+interest;
        printf("AMOUNT :%f ",total); 
        break;
    default:
        break;
    }

}