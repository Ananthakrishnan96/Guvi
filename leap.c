#include<stdio.h>
#include<conio.h>
void main()
{
    int leap;
    printf("Enter the year");
    scanf("%d",&leap);
    if(leap%4==0)
    {
        printf("Entered year is leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
}
