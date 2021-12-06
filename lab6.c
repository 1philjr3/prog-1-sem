#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Task 1 ===\n");
    char mas[4];
    mas[0] = 'a';
    mas[1] = 'b';
    mas[2] = 'c';
    mas[3] = 'd';
    for (int i = 0; i < 4; i++) {
        printf("%c\n", *(mas + i));
    }

    printf("\n=== Task 2 ===\n");
    char* array = (char*)malloc(4 * sizeof(char));
        array[0] = 'a';
        array[1] = 'b';
        array[2] = 'c';
        array[3] = 'd';
        // char* array = malloc(4, sizeof(char));
        for (int i = 0; i < 4; ++i)
        {
            printf("%c ", array[i]);
        }
        printf("\n");
        free(array);
    }
