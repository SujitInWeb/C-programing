#include<stdio.h>
void printline(char ch , int len);
int value(float , float , int );
int main()
{

   float principal,inrate,amount ;
   int period;
   printf("enter principal amount , interst");
   printf(" rate and period \n");
   scanf("%f %f %d", &principal , &inrate ,&period);
   printline('*',52);
   amount = value(principal,inrate , period);
   printf("\n%f\t%f\t%f\n\n",principal,inrate,period, amount);
   printline('=',52);

}
void printline(char ch ,int len )
{
    int i ;
    for(i=1;i<=52;i++)
        printf("%c",ch);
    printf("\n");

}
int value(float p , float r , int n)
{
    int year;
    float sum;

    sum = p;year= 1;
    while (year <= n)
    {
        sum=sum*(1+r);
        year= year + 1;
    }
    return(sum);
    

}