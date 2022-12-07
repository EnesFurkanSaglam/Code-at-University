#include <stdio.h>
#include <stdlib.h>

void fibo(c,a1,a2,a3)
{
    printf("%d\n%d\n",a1,a2);
    for(int i=3;i<=c;i++)
    {
        a3=a1+a2;
        printf("%d\n",a3);
        a1=a2;
        a2=a3;
    }

}
int main()
{
    int a1=0,a2=1,a3,c;
    printf("please enter a fibonacci lenght: ");
    scanf("%d",&c);
    fibo(c,a1,a2,a3);


    return 0;
}
