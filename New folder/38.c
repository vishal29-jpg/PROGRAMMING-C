#include <stdio.h>

int main() {
    int i, j, k, num = 1;
    
    // Loop for rows
    for (i = 1; i <= 4; i++) {
        // Loop for spaces
        for (j = 4; j > i; j--) {
            printf("  ");
        }
        // Loop for numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}