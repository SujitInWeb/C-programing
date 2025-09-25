#include<stdio.h>
void geeks()
{
    int var = 10;
    int *ptr;
    ptr =&var;
    printf("value at ptr =%p\n",ptr);
    printf("value at var =%d\n",var);
    printf("value at *ptr =%d\n",*ptr);

}
int main()
{
    geeks();
    return 0;
}