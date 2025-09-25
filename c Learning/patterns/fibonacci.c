#include<stdio.h>
#include<math.h>
int main()
{
    int fib[10];
    int i,j ;
    int n, prime;
    fib[0]=0 ;
    fib[1]=1 ;
    for(i=2;i<10;i++)
    {
        fib[i]=fib[ i-1]+fib[ i-2];
    }
    printf("fibonacci seriess  :)\n");
    
    for(i=0;i<10;i++)
    {
        printf("%d, ",fib[i]);
    }
    printf("\nprime fibonacci no \n");
    for(i=0;i<10;i++)
    {
        n=fib[i];
        if(n<=1)
        prime = 0;
        else if(n==1||n==3)
        prime=1;
        else if ( n%2==0 )
        prime = 0;
        else
        {
            prime = 1;
            for(j=3;j<sqrt(n);j+=2)
            {
                if(n%j==0)
                prime=0;
            }
        }
            if(prime==1)
            printf("%d, ",n);
    }

}