#include<stdio.h>

void main(void)
{
    int wordCount = 0;
    int charCount = 0;
    int lineCount = 0;
    int inWord = 0; 

    FILE *fptr;
    fptr = fopen("article.txt", "r");

    for (int c = getc(fptr); c != EOF; c = getc(fptr))
    {
        if (c != '\n' && c != '\t')
        {
            charCount++;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            inWord = 0; 
        }
        else if (inWord == 0)
        {
            inWord = 1; 
            wordCount++;
        }
         if (c == '\n')
        {
            lineCount++;
        }
    }
    if ((charCount > 0 || wordCount > 0) && lineCount == 0) {
        lineCount = 1;
    } else if (charCount > 0 || wordCount > 0) {
        lineCount++;
    }
    fclose(fptr);
    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);
}
