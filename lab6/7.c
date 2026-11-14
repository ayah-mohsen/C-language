#include <stdio.h>

int main() {
    char s1[100], s2[100];
    char *p1 = s1, *p2 = s2;
    int same = 1;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while (*p1 != '\0' || *p2 != '\0') {
        if (*p1 != *p2) {
            same = 0;
            break;
        }
        p1++;
        p2++;
    }

    if (same) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}