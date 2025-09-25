#include<stdio.h>
#include<conio.h>
void change(int* ptr)
{
    ptr=20;
}
int main()
{
    int a;
    a=10;
    printf("before change = %d",a);
    change(a);
    printf("after change = %d",a);


}