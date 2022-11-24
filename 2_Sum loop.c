#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int toplam=0;

    for(;;)
    {
        printf("enter a number or if you want loop out enter a 0: ");
        scanf("%d",&i);
        if(i!=0)
        {

            toplam=i+toplam;
            printf("sum:%d\n",toplam);
        }
        else
            break;

    }



    return 0;
}
