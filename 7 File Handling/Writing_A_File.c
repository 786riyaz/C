#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("Sample_File.txt", "w");
    int num=786;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    printf("Write operation is completed in file and file is closed.");
}