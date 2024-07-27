#include <stdio.h>

void main()
{
    int i = 0, j = 0, PrimeFlag = 1;
    printf("Finding Prime number from 1 to 100........\n");
    for (i = 1; i <= 100; i++){
        PrimeFlag = 1;
        for (j = 2; j <= i / 2; j++){
            if (i % j == 0){
                PrimeFlag = 0;
                break;
            }
        }
        
        if (PrimeFlag){
            printf("%d\n", i);
        }
    }
}