#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("Sample_File.txt", "w");
    char MultiLineText[500] = "This is the first line text.\nThis is the second line.\nThis is third line.";
    fprintf(ptr, "%s", MultiLineText);
    fclose(ptr);
    printf("\nWrite operation is completed in file and file is closed !!!\n");
}