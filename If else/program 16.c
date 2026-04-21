#include<stdio.h>

int main()
{
    
    char marks;
    printf("Enter the number");
    scanf("%d",&marks);
    if(marks>90)
    printf("A");
    else if (marks>80)
    printf("B");
    else if(marks>70)
    printf ("C");
    else printf ("FAIL");
    return 0;
}