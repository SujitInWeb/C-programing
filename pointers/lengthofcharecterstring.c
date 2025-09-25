#include<stdio.h>
#include <string.h>

int main()
{
    char name[]="SUJIT";
    int length;
    char *cptr = name;
    printf("%s\n",name);
        while(*cptr != '\0')
        {
            printf("%c is stored at address %p\n",*cptr,(void*)cptr);
            cptr++;
        }
    length = cptr - name;
    printf("\nlength of the string = %d\n",length);
return 0;
}





