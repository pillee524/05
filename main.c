#include <stdio.h>

int main(void) {
    int a;

    printf("Input one integer. : ");
    scanf("%i", &a);

    if(a<0)
        a = -a;

    else
        a = a;
    
    printf("The absolute value is %i\n.", a);

    return 0; }