#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter positive integers (enter a negative integer to stop): \n");

    while () {
        scanf("%d", &number);
        if (number < 0) {
            break;
        }
        count++; 
    }
    printf("You entered %d positive integers.\n", count);
    return 0;
}