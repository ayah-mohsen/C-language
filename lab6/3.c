#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (*ptr != '\0') {
        len++;
        ptr++;
    }

    printf("Length = %d\n", len);

    return 0;
}