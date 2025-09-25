#include <stdio.h>

int main()
{
    char str1[100],str2[100];
    char *ptr1,*ptr2;
    printf("enter string : ");
    gets(str1);
    printf("enter string : ");
    gets(str2);

    ptr1=str1;
    ptr2=str2;
     while (*ptr1!='\0')
     {
        ptr1++;
     }
     while (*ptr2!='\0')
     {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
     }
    *ptr1='\0';
    printf("concatinated string is : %s",str1);
    
    return 0;
}