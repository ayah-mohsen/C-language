#include <stdio.h>

int main() {
    char str[100];
    char *start = str, *end = str;

    printf("Enter a string: ");
    scanf("%s", str);

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}