
#include <stdio.h>
#include <string.h>

struct student
{
    char id_num[6];
    char name[20];
    char gender;
    int age;
};

int main()
{
    struct student students[100], temp;
    int n, i, j;

    printf("Enter number of students n : ");
    scanf("%d", &n);

    if (n  > 100)
    {
        printf(" the number is older than 100");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);


        printf("Please Enter your ID: ");
        scanf("%6s", &students[i].id_num);

        printf("Please Enter your name: ");
        scanf("%20s", students[i].name);

        printf("Please Enter your Gender:");
        scanf(" %c", &students[i].gender);

        printf("Please Enter your:age: ");
        scanf("%d", &students[i].age);

    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(students[j].name,
                       students[j + 1].name) > 0)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\n========\n");

    for (i = 0; i < n; i++)
    {
        printf("%s %s %c %d\n",
               students[i].id_num,
               students[i].name,
               students[i].gender,
               students[i].age);
    }

    return 0;
}
