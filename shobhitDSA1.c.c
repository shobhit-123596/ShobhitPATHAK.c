#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    const int numStrings = 3;
    char* strings[numStrings];

    strings[0] = (char*)malloc(20 * sizeof(char));
    strings[1] = (char*)malloc(20 * sizeof(char));
    strings[2] = (char*)malloc(20 * sizeof(char));
    strcpy(strings[0], "Hi, I dont think");
    strcpy(strings[1], "We have met yet ");
    strcpy(strings[2], "I am shobhit");

    printf("Original Strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < numStrings; i++) {
        reverseString(strings[i]);
    }

    printf("\nReversed Strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < numStrings; i++) {
        free(strings[i]);
    }
    return 0;
}
