#include <stdio.h>
#include <stdlib.h>
void top()
{
    printf("________  \n");
}
void middle_top()
{
    printf("\\      / \n");
    printf(" \\    / \n");
    printf("  \\  / \n");
    printf("   \\/  \n");

}
void middle_down()
{
     printf("   /\\ \n");
    printf("  /  \\   \n");
    printf(" /    \\  \n");
    printf("/      \\   \n");
}
void down()
{
    printf("--------");
}


int main()
{
    top();
    middle_top();
    middle_down();
    down();
    return 0;
}
