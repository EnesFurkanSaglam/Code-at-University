#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    printf("please enter a number=%d",i);
    scanf("%d",&i);
    if (i%2==0)
        printf("%d is even number",i);
    else
        printf("%d is odd number",i);

    return 0;
