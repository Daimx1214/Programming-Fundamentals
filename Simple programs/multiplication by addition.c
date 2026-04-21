#include <stdio.h>

// Function prototypes
int multiplication(int, int);
int addition(int, int);

int main() {
    int result,x,y;

    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the second number: ");
    scanf("%d", &y);

    result = multiplication(x, y);
    printf("The product of two numbers is = %d\n", result);

    return 0;
}
 int multiplication(int x, int y) {
   int mul;
   mul = addition(x, y);
    return mul;

}
int addition(int x, int y) {
    int res = 0;
    for (int i = 0; i < y; i++) {
        res = res + x;
    }
    return res;
}