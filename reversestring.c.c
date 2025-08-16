#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
