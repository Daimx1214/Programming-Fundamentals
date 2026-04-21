#include <stdio.h>
int main()
{
    int a;
    printf("enter a size of your array=");
    scanf("%d",&a);
    int num[a];
    printf("enter your hexadecimal value=");
    for(int i=0;i<a;i++){
        scanf("%d", &num[i]);
    }
   
    int multiply=0;
    for(int i=0;i<a;i++){
        multiply=multiply * 16 + num[i];
    }
   
    printf("%d", multiply);
    return 0;
}