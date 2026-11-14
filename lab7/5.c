#include <stdio.h>

struct customer
{
    char name[30];
    int account;
    float balance;
    
};

void printCustomers(struct customer c[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (c[i].balance < 200)
        {
            printf("%s\n", c[i].name);
        }
    }
}

void addMoney(struct customer c[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (c[i].balance > 1000)
        {
            c[i].balance = c[i].balance + 100;

            printf("%s: %.2f\n", c[i].name, c[i].balance);
        }
    }
}

int main()
{
    struct customer c[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%s", c[i].name);
        scanf("%d", &c[i].account);
        scanf("%f", &c[i].balance);
    }

    printCustomers(c, 3);
    addMoney(c, 3);

    return 0;
}
