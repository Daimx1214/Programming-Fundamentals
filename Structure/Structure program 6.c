//6.Cricket Player Records: Define a structure Cricketer with:
// playerName (string)
// team (string)
  // runs (integer)
// Write a program to input and display data for 3 cricketers.
#include <stdio.h>
#include <string.h>

struct Cricketer {
    char playerName[50];
    char team[50];
    int runs;
};

int main() {
    struct Cricketer player[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for player %d\n", i + 1);

        printf("Player Name: ");
        scanf(" %[^\n]", player[i].playerName);

        printf("Team Name: ");
        scanf(" %[^\n]", player[i].team);

        printf("Runs Scored: ");
        scanf("%d", &player[i].runs);
    }

    printf("\nCricketer Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", player[i].playerName);
        printf("Team: %s\n", player[i].team);
        printf("Runs: %d\n", player[i].runs);
    }

    return 0;
}
