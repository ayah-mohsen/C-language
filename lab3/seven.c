#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the odd magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n <= 0) {
        printf("Invalid input! Size must be an odd positive number.\n");
        return 1;
    }

    int magicSquare[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    int row = 0;
    int col = n / 2;

    for (int num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num;

        int next_row = row - 1;
        int next_col = col + 1;

        if (next_row < 0) {
            next_row = n - 1;
        }
        if (next_col == n) {
            next_col = 0;
        }

        if (magicSquare[next_row][next_col] != 0) {
            row = (row + 1) % n;
        } else {
            row = next_row;
            col = next_col;
        }
    }

    printf("\nThe Magic Square of size %dx%d is:\n\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;
}