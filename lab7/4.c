
#include <stdio.h>

struct student {
    int roll;
    char name[30];
    int age;
};

void printYounger(struct student s[], int n, int limit) {
    int i;

    for (i = 0; i < n; i++) {
        if (s[i].age < limit) {
            printf("%s\n", s[i].name);
        }
    }
}

void printStudent(struct student s[], int n, int rollNo) {
    int i;

    for (i = 0; i < n; i++) {
        if (s[i].roll == rollNo) {
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            return;
        }
    }

    printf("Student not found\n");
}

int main() {
    struct student s[3] = {
        {101, "Aia", 18},
        {102, "Mai", 15},
        {103, "gee", 20}
    };

    printYounger(s, 3, 18);

    printStudent(s, 3, 102);

    return 0;
}
