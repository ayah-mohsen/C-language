#include<stdio.h>

void main(void)
{
    FILE *p1, *p2, *p_out;
    int read1,read2;
    int num1, num2;
    int ch;

    p1=fopen("file1.txt", "r");
    p2=fopen("file2.txt", "r");
    p_out=fopen("merged.txt", "w");

    if(p1==NULL || p2==NULL || p_out==NULL){
        printf("Error in opening the files");
        exit(10);

    }
    read1 = fscanf(p1, "%d", &num1);
    read2 = fscanf(p2, "%d", &num2);

    while(read1==1 && read2==1){
        if(num1>=num2){
            fprintf(p_out,"%d\n",num1);
            read1 = fscanf(p1, "%d", &num1);
        }
        else
            fprintf(p_out,"%d\n",num2);
            read2 = fscanf(p2, "%d", &num2);

    }
    while(read1==1){
         fprintf(p_out,"%d\n",num1);
            read1 = fscanf(p1, "%d", &num1);
    }

    while(read2==1){
         fprintf(p_out,"%d\n",num2);
            read1 = fscanf(p1, "%d", &num2);
    }
    fclose(p1);
    fclose(p2);

    fclose(p_out);
    p_out = fopen("merged.txt", "r");

    if (p_out == NULL)
    {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- File Contents ---\n");

    while ((ch = fgetc(p_out)) != EOF)
    {
        putchar(ch);
    }

    printf("\nDone!\n");

    fclose(p_out);

}
