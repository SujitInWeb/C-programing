#include <stdio.h>
int main()
{
    int a=5;
    int sum= 0;
    int final= 0;
    for (int i = 0; i <= a; i++)
    {
       sum +=i;
       final+=sum;
    }
    printf("%d - is the sum of the ",final);
    

    return 0;
}