#include <stdio.h>

int main(void) {
    int a,b;
    char operator;
    printf("Inpur the calculation: ");
    scanf("%d %c %d", &a, &operator, &b);

    switch(operator){
        case '+':
            printf("= %d\n", a + b);
            break;
        case '-':
            printf("= %d\n", a - b);
            break;
        case '*':
            printf("= %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("= %f\n", (float)a / b);
            else
                printf("ZeroDivisionError.\n");
        
            break;}
    }