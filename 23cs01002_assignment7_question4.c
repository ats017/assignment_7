#include <stdio.h>

int findLargest(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int max = findLargest(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int arr[] = {10, 23, 5, 87, 45, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);
    
    printf("The largest element in the array is: %d", largest);

    return 0;
}