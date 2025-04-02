#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 1; i <= 4; i++) { // Controls rows
        for (spaces = 4; spaces > i; spaces--) { // Prints leading spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // Prints '*', maintaining the gap pattern
            printf("* ");
        }
        printf("\n"); // Moves to the next line
    }

return 0;
}