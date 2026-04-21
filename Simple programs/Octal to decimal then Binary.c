#include <stdio.h>

int main() {
    int a;
    printf("write the size of the array = ");
    scanf("%d",&a);
    int num[a];
    printf("enter your octal  value = ");
    for(int i=0; i<a; i++){
       scanf("%d",&num[i]); 
    }
    int result = 0;
    int power = 1;
    int sum = 0;
     int s = a;
    for(int i=a-1; i>=0; i--){
        power = 1;
       for(int j=a-s; j>0; j--){
           power =power * 8;
       }
        s--;
        result = power * num[i];
        sum = sum + result;
    }
    printf("%d\n", sum);
    int final[10] ;
    int  i=0;
    while(sum>0&&i<10){
        final[i] = sum%2;
        sum = sum/2;
        i++;
    }
    for(int i=9; i>=0; i--){
     printf("%d", final[i]);
    }

return 0;
     }