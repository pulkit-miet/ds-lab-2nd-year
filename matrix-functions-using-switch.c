#include <stdio.h>

void main() {
    int a[10][10], b[10][10], res[10][10], t[10][10];
    int r1, c1, r2, c2, i, j, k, choice;

    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter Matrix 1 elements:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix 2 elements:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Transpose\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2) {
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        res[i][j] = a[i][j] + b[i][j];
                        printf("%d ", res[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Addition not possible.\n");
            }
            break;

        case 2:
            if (r1 == r2 && c1 == c2) {
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        res[i][j] = a[i][j] - b[i][j];
                        printf("%d ", res[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Subtraction not possible.\n");
            }
            break;

        case 3:
            if (c1 == r2) {
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        res[i][j] = 0;
                        for (k = 0; k < c1; k++) {
                            res[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }

                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        printf("%d ", res[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Multiplication not possible.\n");
            }
            break;

        case 4:
            printf("Transpose of Matrix 1:\n");
            for (i = 0; i < c1; i++) {
                for (j = 0; j < r1; j++) {
                    t[i][j] = a[j][i];
                    printf("%d ", t[i][j]);
                }
                printf("\n");
            }

            printf("Transpose of Matrix 2:\n");
            for (i = 0; i < c2; i++) {
                for (j = 0; j < r2; j++) {
                    t[i][j] = b[j][i];
                    printf("%d ", t[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }
}
