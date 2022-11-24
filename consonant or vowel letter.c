#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("enter a letter: ");
    scanf("%c",&i);
    switch(i)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'U':
        case 'u':
        case 'O':
        case 'o':

            printf("letter is vowel");
            break;
        default:
         printf("letter is consonant");
         break;
    }
    return 0;
}
