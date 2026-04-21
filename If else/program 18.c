#include<stdio.h>

int main()
{
    int age;
    printf("Enter a number");
    scanf("%d",&age);
    if (age<12)
    printf("child");
    else if(age>=13 && age<=19)
    printf("teenager");
    else if (age>=20)
    printf("adult");
    return 0;
}