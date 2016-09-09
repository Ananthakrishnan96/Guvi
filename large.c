#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c;
    printf("Enter any three values for abc");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        printf("\n a is greater than b");
    }
    if(b>c)
    {
        printf("\n b is greater than c");
    }
    else
    {
       printf("\n c is greater than a");
    }
}
