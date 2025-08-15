#include <stdio.h>
int main() {
    int arr[5], search, found = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number found!\n");
    else
        printf("Number not found!\n");
    return 0;
}
