#include <stdio.h>
#include <stdlib.h>

int ebobs(a,b)
{
    int ebob;
    if(a>b)
    {
        for(int i=1; i<=b; i++)
        {
            if(a%i==0 && b%i==0)
                ebob=i;


        }
        return ebob;


    }
    else if(b>a)
    {
        for(int i=1; i<=a; i++)
        {
            if(a%i==0 && b%i==0)
                ebob=i;


        }
        return ebob;

    }
    else
    {
        return a;
    }

}
int main()
{
    int a;
    int b;
    int c;
    printf("please enter two number for a hcf and lcm :\n ");
    scanf("%d%d",&a,&b);
    c=ebobs(a,b);
    printf("HCF: %d\n",c);
    int ekok=a*b/c;
    printf("LCM: %d\n",ekok);





    return 0;
}
