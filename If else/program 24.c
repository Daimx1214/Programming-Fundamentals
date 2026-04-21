#include <stdio.h>

int main() {
    int temperature;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);

    if (temperature >= 30) {
        printf("It's hot.\n");
    } else {
        if (temperature >= 15) {
            printf("It's moderate.\n");
        } else {
            printf("It's cold.\n");
        }
    }

    return 0;
}
