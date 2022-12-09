#include <stdio.h>
#include <stdlib.h>

int ust(int a)
{
    int j=0;

    int b;
    b=a;
    for(a;a>0;a--)
    {
    int i,yildiz;
    for (i=1;i<b;i++)
    {
        printf(" ");
    }
    b--;
    j++;
    yildiz=2*j-1;

    for(yildiz;yildiz>0;yildiz--)
    {
        printf("*");
    }

    printf("\n");
    }

}

int alt(int a)
{
     int c=1;
    int b=a;
    for(b;b>0;b--)
    {


    int bosluk=c;

         for(bosluk;bosluk>0;bosluk--)
         {
             printf(" ");

         }
    c++;

        a--;
        int yildiz=2*a-1;
    for(yildiz;yildiz>0;yildiz--)
    {
        printf("*");
    }
    printf("\n");

    }




}


int main()
{
    int a;
    printf("please enter a top of baklva slice: ");
    scanf("%d",&a);
    ust(a);
    alt(a);

    return 0;
}
