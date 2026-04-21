#include <stdio.h>
int division(int, int);
int subtraction(int, int);

    int main() {
    int result;
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b) {
        result = division(a, b);
    } else {
        result = division(b, a);
    }
    printf("The remainder is = %d\n", result);
    return 0;
}
    int subtraction(int a, int b) {
    int div;
    div = division(a, b);
    return div;
 }
    int division(int a, int b) {
    int step = 0;
    while (a >= b) {
        a = a - b;
        step++;
    }
    printf("The quotient is = %d\n", step);
    return a;
}