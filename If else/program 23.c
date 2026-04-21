#include <stdio.h>

int main() {
    int age, income;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your monthly income: ");
    scanf("%d", &income);

    if (age >= 21) {
        if (income >= 30000) {
            printf("You are eligible for a loan.\n");
        } else {
            printf("Your income is too low for a loan.\n");
        }
    } else {
        printf("You are not eligible for a loan due to age restriction.\n");
    }

    return 0;
}
