#include <stdio.h>

int main() {
    long a[3][3], b[3][3], c[3][3], d[3][3], e[3][3], f[3][3];
    int k;
    int row , col;

    // Input for first image
    printf("Enter data of first image (pixels):\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%ld", &a[row][col]);
        }
    }

    // Input for second image
    printf("Enter data of second image (pixels):\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%ld", &b[row][col]);
        }
    }
    // Addition of two matrices
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            c[row][col] = a[row][col] + b[row][col];
        }
    }
    printf("\n Sum of two matrices:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%ld\t", c[row][col]);
        }
        printf("\n");
    }

    // Subtraction of two matrices
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            d[row][col] = a[row][col] - b[row][col];
        }
    }
    printf("\nDifference of two matrices:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%ld\t", d[row][col]);
        }
        printf("\n");
    }

    // Multiplication of two matrices
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            e[row][col] = 0;
            for (k = 0; k < 3; k++) {
                e[row][col] += a[row][k] * b[k][col];
            }
        }
    }
    printf("Product of two matrices:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%ld\t", e[row][col]);
        }
        printf("\n");
    }

    // Transpose of first image matrix
    printf("Transpose of matrix of first image:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            f[row][col] = a[col][row];
            printf("%ld\t", f[row][col]);
        }
        printf("\n");
    }

    return 0;
}
