#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("Sample_File.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    printf("\nScanned number from the file is :: %d\n", num);
}