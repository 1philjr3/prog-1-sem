
#include <stdio.h>
int main() {
    printf("Task 1: \n");
    int task1[7] = {10, 20, 30, 40, 50, 60, 70};
    for (int i = 0; i < 7; i++) {
        printf("%d\n", task1[i]);
    }

    printf("\nTask 2:\n");
    int mat1[2][2] = { {1, 1},
                       {1, 4} };
    
    int mat2[2][2] = { {1, 2},
                       {4, 1} };
    
        int matR[2][2];

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                matR[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    matR[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%d ", matR[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
