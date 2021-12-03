#include <stdio.h>


int main () {

    // 1 Задание
    printf("Task 1:\n");
    int digit;
    scanf("%d", &digit);

    // 2 Задание
    printf("\n\nTask 2:\n");
    printf("%d\n", digit);

    // 3 Задание
    printf("\n\nTask 3:\n");
    printf("%o     %o\n", digit, digit >> 1);

    // 4 Задание
    printf("\n\nTask 4:\n");
    digit = ~digit;
    printf("%o     %o\n", digit, ~digit);

    // 5 Задание
    printf("\n\nTask 5:\n");
    int new_digit;
    scanf("%o", &new_digit);
    printf("%o\n", digit | new_digit);


    return 0;
}
