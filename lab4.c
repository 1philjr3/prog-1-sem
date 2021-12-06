//%2 - проверка на четность, которая зависит от младшего бита:
//младший бит 0 - число четное - делится без остатка на 2
//младший бит 1 - число нечетное - делится с остатком на 2

#include <stdio.h>
#define MIN_VALUE 10
#define MAX_VALUE 100

int main() {
    
    // 1 Задание
    int digit;
    int result;
    printf("Input your digit: ");
    scanf("%d", &digit);
    result = MIN_VALUE <= digit && digit <= MAX_VALUE;
    
    //printf("%d\n", (digit >= 10 && digit <= 100));
    printf("Your number %d in a given range %d...%d: %s  \n", digit, MIN_VALUE, MAX_VALUE, result ? "YES":"NO");

    // 2 Задание
    printf("\n\nInput new one number: ");
    int new_digit;
    scanf("%d", &new_digit);
    printf("%d\n", new_digit & (1u << 21));

    return 0;
}
