#include <stdio.h>

int main(void) {
    int answer=59;
    int b,count=0;

    printf("Guess a number: ");
    scanf("%i", &b);

    do
    {   printf("Guess a number: ");
        scanf("%i", &b);
         if (b < answer)
            printf("low!\n");
         else if (b > answer)
            printf("high!\n");
        count++;
    } while(answer != b);
      
    printf("Congratulations! trials:%i\n", count);

    return 0;
}