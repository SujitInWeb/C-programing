#include<stdio.h>
#include<string.h>
int main()
{
    char Name[50],Lastname[15],fullname[50];
    printf("enter name : ");
    gets(Name);
    printf("enter last name : ");
    gets(Lastname);
    strcat(Name,Lastname);
    printf("\nyour full name : %s",Name);
    return 0;
}