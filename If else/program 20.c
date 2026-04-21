#include<stdio.h>

int main()
{
    int a,b;
    printf ("enter a number");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("A win");
    else if (a<b)
    printf("B wins");
    else 
    printf("Draw");
    return 0;
}