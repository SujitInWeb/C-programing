#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("enter string: ");
    gets(str);
    char *ptr;
    ptr=str;
    int count=0;
    for ( ptr= str; *ptr != '\0'; ptr++)
    {
       count++;
    }
    
    printf("the length of the string is : %d",count);
    return 0;
}