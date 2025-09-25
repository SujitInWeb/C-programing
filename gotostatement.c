
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    int count;
    count = 1;
    printf("enter FIVE real values in a line \n");
read:
    scanf("%lf",&x);
    printf("\n");
    if (x<0)
    {
    printf("value -%d is negative \n",count);
    }    
    else
    {
        y=sqrt(x);
        printf("%lf\t%f\n",x,y);
    }
    count = count +1;
    if(count<=5)
        goto read;
    
    printf("\n END OF COMPUTATION");
}