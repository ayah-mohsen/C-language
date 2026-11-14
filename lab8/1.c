#include<stdio.h>
int main(void)
{
    FILE *fptr;
    char name[30];
    int numStudents = 5, i;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < numStudents; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        fprintf(fptr, "Student %d: %s\n", i + 1, name);
    }

    fclose(fptr);
    return 0;
}