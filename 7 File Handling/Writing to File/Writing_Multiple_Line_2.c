#include <stdio.h>
#include <string.h>

void main()
{
    FILE *ptr;
    ptr = fopen("Sample_File.txt", "w");
    char MultiLineText[500] = "This is the first line text.\nThis is the second line.\nThis is third line.";
    int i = 0;
    while (i < strlen(MultiLineText))
    {
        // printf("Writing Character :: %c\n", MultiLineText[i]);
        fputc(MultiLineText[i],ptr);
        i++;
    }

    fclose(ptr);
    printf("\nWrite operation is completed in file and file is closed !!!\n");
}