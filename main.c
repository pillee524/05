#include <stdio.h>

int main(void) {
    int counter = 0;
    int c;
    
    printf("Input a string.: ");
    scanf("%i", &counter);

    while ((c = getchar()) != '\n')
        if (c>='0' && c<='9')
            counter++;
    
    printf("The number of digits is %i\n.", counter);

    return 0; }