// The fgetc() function can read file with multiple characters and multiple lines
#include <stdio.h>

void main()
{
    FILE *ptr;
    char wholeData[500], ch;
    int i = 0;
    printf("\n\nOpening the File in read mode...\n");
    ptr = fopen("TextFile.txt", "r");
    if (ptr == NULL)
    {
        printf("Error while opening the file\n");
    }
    else
    {
        printf("Scanning the file....\n");
        while (1)
        {
            ch = fgetc(ptr);
            // printf("Current Character :: %c\n", ch);
            if (ch == EOF)
            {
                printf("Whole file scanning completed.\n");
                break;
            }
            else
            {
                wholeData[i] = ch;
                i++;
            }
        }
    }
    fclose(ptr);
    printf("File closed successfully.\n\n");
    
    printf("Whole data from the file is :: \n%s\n\n", wholeData);
}