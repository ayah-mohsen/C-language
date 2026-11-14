
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fptr;
    char name[20];
    int numEmployees=0 , i;
    int count = 0;
    int ch;



    fptr = fopen("employees.txt", "r");

    if (fptr != NULL)
    {
        while ((ch = fgetc(fptr)) != EOF)
        {
            if (ch == '\n')
                count++;
        }
        fclose(fptr);
    }

   fptr = fopen("employees.txt", "a");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (1)
    {
        printf("Enter name of employee %d (or END to stop): ", count + 1);
        scanf("%19s", name);

        if (strcmp(name, "END") == 0)
        {
            break;
        }

        count++; 
        fprintf(fptr, "Employee %d: %s\n", count, name);
    }

    fclose(fptr);
    fptr = fopen("employees.txt", "r");

    if (fptr == NULL)
    {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- File Contents ---\n");

    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }

    printf("\nDone!\n");

    fclose(fptr);
    return 0;
}
