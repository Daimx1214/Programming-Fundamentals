#include <stdio.h>

int main() {
	int i;
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

   while(i<=n){
   
   if(i % 2 ==1){
   	sum= sum +i;
   }
   i++;
}
    printf("The sum of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}