#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    int hash[256] = {0};
    int currentIndex = 0;
    int lastIndex = 0;

    while (*(str + currentIndex)) {
        char temp = *(str + currentIndex);
        if (hash[temp] == 0) {
            hash[temp] = 1;
            *(str + lastIndex) = *(str + currentIndex);
            lastIndex++;
        }
        currentIndex++;
    }
    *(str + lastIndex) = '\0';
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
