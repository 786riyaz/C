// The fscanf() function does not work as expected while you have to read a file which contains multiple line or multiple words
#include <stdio.h>

void main()
{
    FILE *ptr;
    char wholeData[500];
    printf("Opening the File in read mode...\n");
    ptr = fopen("TextFile.txt", "r");
    if (ptr == NULL)
    {
        printf("Error while opening the file\n");
    }
    else
    {
        printf("Scanning the file....\n");
        fscanf(ptr, "%s", wholeData);
        printf("File Content :: %s", wholeData);
    }
    fclose(ptr);
}