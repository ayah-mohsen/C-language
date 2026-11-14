#include <stdio.h>

void mergeArrays(int a[], int n1, int b[], int n2, int c[]) {
    for (int i = 0; i < n1; i++) c[i] = a[i];
    for (int i = 0; i < n2; i++) c[n1 + i] = b[i];
}

int main() {
    int a[] = {1, 2, 3}, b[] = {4, 5, 6}, c[6];
    mergeArrays(a, 3, b, 3, c);
    for (int i = 0; i < 6; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}