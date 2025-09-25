//wap to inter change two values using ptr
#include <stdio.h>

int main()
{
    int a,b;
    int *ptr1,*ptr2;
    printf(" a : ");
    scanf("%d",&a);
    printf(" b : ");
    scanf("%d",&b);
    ptr1=&b;
    ptr2=&a;
    printf("a : %d",*ptr1);
    printf("\n");
    printf("b : %d",*ptr2);
    

    return 0;
}
