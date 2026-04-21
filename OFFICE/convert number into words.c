#include <stdio.h>

int main() {
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        printf("zero");
        return 0;
    }

    if (num >= 100000) { 
        int lakhs = num / 100000;
        if (lakhs == 1) printf("one lakh ");
        else if (lakhs == 2) printf("two lakh ");
        else if (lakhs == 3) printf("three lakh ");
        else if (lakhs == 4) printf("four lakh ");
        else if (lakhs == 5) printf("five lakh ");
        else if (lakhs == 6) printf("six lakh ");
        else if (lakhs == 7) printf("seven lakh ");
        else if (lakhs == 8) printf("eight lakh ");
        else if (lakhs == 9) printf("nine lakh ");
        num %= 100000;
    }

    if (num >= 10000) { 
        int tenThousands = num / 1000;
        if (tenThousands == 10) printf("ten thousand ");
        else if (tenThousands == 11) printf("eleven thousand ");
        else if (tenThousands == 12) printf("twelve thousand ");
        else if (tenThousands == 13) printf("thirteen thousand ");
        else if (tenThousands == 14) printf("fourteen thousand ");
        else if (tenThousands == 15) printf("fifteen thousand ");
        else if (tenThousands == 16) printf("sixteen thousand ");
        else if (tenThousands == 17) printf("seventeen thousand ");
        else if (tenThousands == 18) printf("eighteen thousand ");
        else if (tenThousands == 19) printf("nineteen thousand ");
        num %= 1000;
    } else if (num >= 1000) { 
        int thousands = num / 1000;
        if (thousands == 1) printf("one thousand ");
        else if (thousands == 2) printf("two thousand ");
        else if (thousands == 3) printf("three thousand ");
        else if (thousands == 4) printf("four thousand ");
        else if (thousands == 5) printf("five thousand ");
        else if (thousands == 6) printf("six thousand ");
        else if (thousands == 7) printf("seven thousand ");
        else if (thousands == 8) printf("eight thousand ");
        else if (thousands == 9) printf("nine thousand ");
        num %= 1000;
    }

    if (num >= 100) { 
        int hundreds = num / 100;
        if (hundreds == 1) printf("one hundred ");
        else if (hundreds == 2) printf("two hundred ");
        else if (hundreds == 3) printf("three hundred ");
        else if (hundreds == 4) printf("four hundred ");
        else if (hundreds == 5) printf("five hundred ");
        else if (hundreds == 6) printf("six hundred ");
        else if (hundreds == 7) printf("seven hundred ");
        else if (hundreds == 8) printf("eight hundred ");
        else if (hundreds == 9) printf("nine hundred ");
        num %= 100;
    }

    if (num >= 20) { 
        int tens = num / 10;
        if (tens == 2) printf("twenty ");
        else if (tens == 3) printf("thirty ");
        else if (tens == 4) printf("forty ");
        else if (tens == 5) printf("fifty ");
        else if (tens == 6) printf("sixty ");
        else if (tens == 7) printf("seventy ");
        else if (tens == 8) printf("eighty ");
        else if (tens == 9) printf("ninety ");
        num %= 10;
    }

    if (num > 0) { 
        if (num == 1) printf("one");
        else if (num == 2) printf("two");
        else if (num == 3) printf("three");
        else if (num == 4) printf("four");
        else if (num == 5) printf("five");
        else if (num == 6) printf("six");
        else if (num == 7) printf("seven");
        else if (num == 8) printf("eight");
        else if (num == 9) printf("nine");
        else if (num == 10) printf("ten");
        else if (num == 11) printf("eleven");
        else if (num == 12) printf("twelve");
        else if (num == 13) printf("thirteen");
        else if (num == 14) printf("fourteen");
        else if (num == 15) printf("fifteen");
        else if (num == 16) printf("sixteen");
        else if (num == 17) printf("seventeen");
        else if (num == 18) printf("eighteen");
        else if (num == 19) printf("nineteen");
    }

    printf("\n");
    return 0;
}
