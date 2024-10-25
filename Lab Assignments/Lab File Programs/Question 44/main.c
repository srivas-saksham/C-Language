#include <stdio.h>
int maximum(int n, int a[]){
    int max = a[0];

    for (int i = 1; i < n; i++){
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int minimum(int n, int a[]){
    int min = a[0];

    for (int i = 1; i < n; i++){
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
int main() {
    int n,max,min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = maximum(n, arr);
    min = minimum(n, arr);
    printf("Max Number in Array is %d\n", max);
    printf("Min Number in Array is %d\n", min);

    return 0;
}
