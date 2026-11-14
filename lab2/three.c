#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 0 and 99: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("zero\n");
    }
    
    else if (num < 20) {
        if (num == 1) printf("one\n");
        else if (num == 2) printf("two\n");
        else if (num == 3) printf("three\n");
        else if (num == 4) printf("four\n");
        else if (num == 5) printf("five\n");
        else if (num == 6) printf("six\n");
        else if (num == 7) printf("seven\n");
        else if (num == 8) printf("eight\n");
        else if (num == 9) printf("nine\n");
        else if (num == 1) printf("ten\n");
        else if (num == 11) printf("eleven\n");
        else if (num == 12) printf("twelve\n");
        else if (num == 13) printf("thirteen\n");
        else if (num == 14) printf("fourteen\n");
        else if (num == 15) printf("fifteen\n");
        else if (num == 16) printf("sixteen\n");
        else if (num == 17) printf("seventeen\n");
        else if (num == 18) printf("eighteen\n");
        else if (num == 19) printf("nineteen\n");
    }
    
    else if (num <= 99) {
        int tens = num / 10; // 
        int ones = num % 10; 

        if (tens == 2) printf("twenty");
        else if (tens == 3) printf("thirty");
        else if (tens == 4) printf("forty");
        else if (tens == 5) printf("fifty");
        else if (tens == 6) printf("sixty");
        else if (tens == 7) printf("seventy");
        else if (tens == 8) printf("eighty");
        else if (tens == 9) printf("ninety");

        if (ones == 1) printf(" one");
        else if (ones == 2) printf(" two");
        else if (ones == 3) printf(" three");
        else if (ones == 4) printf(" four");
        else if (ones == 5) printf(" five");
        else if (ones == 6) printf(" six");
        else if (ones == 7) printf(" seven");
        else if (ones == 8) printf(" eight");
        else if (ones == 9) printf(" nine");

        printf("\n");
    }
    
    else {
        printf("Number out of range! Please enter a number between 0 and 99.\n");
    }

    
}