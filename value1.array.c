#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    else {
        int max = findMax(arr, n - 1);
        return (arr[n - 1] > max) ? arr[n - 1] : max;
    }
}

int main() {
    int arr[] = {1, 4, 3, -5, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("Maximum value in the array is %d\n", max);
    return 0;
}
