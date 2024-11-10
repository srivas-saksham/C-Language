//Program to Declayer an array of pointers, read values and print them
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the No of Elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptrs[n];

    for (i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Pointing Each element of pointer array to regular array
    for (i = 0; i < n; i++) {
        ptrs[i] = &arr[i];
    }

    printf("\nYou Entered the Following Values:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *ptrs[i]);  // Dereference the pointer to print the value
    }

    return 0;
}
