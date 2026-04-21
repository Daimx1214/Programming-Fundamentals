#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%7==0&& n%3==0)
    printf("divisible");
    else printf("not divisible");
    return 0;
}