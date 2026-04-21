#include<stdio.h>

int main() {
    int a, b, result, choice;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("Choose an operation\n");
    printf(" Addition (+)\n  Subtraction (-)\n Multiplication (*)\nDivision (/)\n");
    
    printf("Enter your choice (1-4) ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("The result of %d + %d = %d\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("The result of %d - %d = %d\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("The result of %d * %d = %d\n", a, b, result);
            break;
        case 4:
                result = a / b;
                printf("The result of %d / %d = %d\n", a, b, result);
            
            break;
        default:
            printf("Invalid input! ");
    }

    return 0;
}
