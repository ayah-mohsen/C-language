#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main(void) {
    FILE *fptr;
    struct Student students[5];     
    struct Student read_students[5]; 
    int num_students = 5;

    printf("--- Enter data for %d students ---\n", num_students);
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    fptr = fopen("students.dat", "wb");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), num_students, fptr);
    fclose(fptr);
    printf("\n[Success] Data saved to students.dat\n");

    fptr = fopen("students.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(read_students, sizeof(struct Student), num_students, fptr);
    fclose(fptr);

    printf("\n--- Student Records from File ---\n");
    printf("%-10s | %-25s | %-5s\n", "ID", "Name", "GPA");
    printf("------------------------------------------------\n");

    for (int i = 0; i < num_students; i++) {
        printf("%-10d | %-25s | %-5.2f\n",
               read_students[i].id,
               read_students[i].name,
               read_students[i].gpa);
    }

    return 0;
}

