#include <stdio.h>
#include <conio.h>

int main() {
    char input[6];
    int count = 0;
    char ch;

    printf("Enter an integer (digits only, max 5 digits): ");

    while (1) {
        ch = getch();

        if (ch == 13) {
            if (count > 0) {
                break;
            }
        } else if (ch == 8) {
            if (count > 0) {
                count--;
                printf("\b \b");
            }
        } else if (ch >= '0' && ch <= '9') {
            if (count < 5) {
                input[count] = ch;
                count++;
                printf("%c", ch);
            }
        }
    }

    input[count] = '\0';

    printf("\n\nYou entered the valid number: %s\n", input);

    return 0;
}