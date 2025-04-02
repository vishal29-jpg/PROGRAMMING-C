#include <stdio.h>

int main() {
    int n, i, min, max;
    
    // Get the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n In reversed array : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d", arr[i]);

    }
    return 0;
}