#include <stdio.h>

int main() {
    int i, j, spaces;

    // Upper Pyramid
    for (i = 1; i <= 4; i++) {
        for (spaces = 4; spaces > i; spaces--) { // Print leading spaces
            printf("  ");
        }
        for (j = 1; j <= i; j++) { // Print stars with spacing
            printf("*   ");
        }
        printf("\n");
    }

    // Lower Inverted Pyramid
    for (i = 3; i >= 1; i--) {
        for (spaces = 4; spaces > i; spaces--) { // Print leading spaces 
            printf("  ");
        }
        for (j = 1; j <= i; j++) { // Print stars with spacing
            printf("*   ");
        }
        printf("\n");
    }

return 0;
}
