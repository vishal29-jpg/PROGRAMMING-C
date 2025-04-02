#include <stdio.h>

int linearSearch(int arr[], int size, int key) { for (int i = 0; i < size; i++) { if (arr[i] == key) { return i; } } return -1; }

int main() { int n, key; printf("Enter number of elements: "); scanf("%d", &n);

int arr[n];
printf("Enter elements: ");
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("Enter element to search: ");
scanf("%d", &key);

int result = linearSearch(arr, n, key);

if (result != -1) {
    printf("Found at index %d\n", result);
} else {
    printf("Not found\n");
}

return 0;

}