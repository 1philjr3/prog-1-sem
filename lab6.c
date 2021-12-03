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
    int i, n;
    printf("Input your array:\n");
    scanf("%d", &n);
    
    int *arr = (int *) malloc(4 * sizeof(int));//
    /*arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'd';*/
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    printf ("\t%d\n", arr[i]);
    free(arr);
    return 0;
}
