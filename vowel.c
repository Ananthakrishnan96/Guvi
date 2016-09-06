#include <stdio.h>
#include <stdlib.h>
void main()
{
    char vowel;
    printf("Enter the character");
    scanf("%c",&vowel);
    switch(vowel)
    {
    case 'a':
        printf("The character a is vowel");
        break;
    case 'e':
        printf("The character e is vowel");
        break;
    case 'i':
        printf("The character i is vowel");
        break;
    case 'o':
        printf("The character o is vowel");
        break;
    case 'u':
        printf("The character u is vowel");
        break;
    default :
        printf("The character is not a vowel");
    }

    }
