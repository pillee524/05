#include <stdio.h>

int main(void) {
    int a;

    printf("Input one integer: ");
    scanf("%i", &a);

    if(a<0)
        printf("Negative number.");

    else if(a==0)
        printf("Zero.");

    else
        printf("Positive number.");

    return 0;}