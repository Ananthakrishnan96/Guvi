#include <stdio.h>
#include <stdlib.h>
void main()
{
   int a;
   printf("Enter the value for a");
   scanf("%d",&a);
 if(a<=0)
 {
     if(a<0)
        printf("The value of a is negative");
     else
        printf("The value of a is zero");
 }
 else
    printf("The value of a is positive");
}

