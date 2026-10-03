#include <stdio.h>

int main(void) {
    int a,i,sum=0;

    printf("Input an interger: ");
    scanf("%i", &a);

    for (i=1; i<=a; i++) {
        sum += i;
    }
    printf("Sum result is: %i\n", sum);

    return 0;
}