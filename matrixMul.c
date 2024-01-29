#include<stdio.h>

int main() {
    int x, m, n, y;
    printf("Enter the orders of the two matrix : ");
    scanf("%d %d %d %d", &x, &m, &n, &y);
    
    int a[x][m], b[n][y], c[x][y];

    printf("Enter the first matrix : ");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix : ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (m != n) {
        printf("Error: Matrix multiplication is not possible with the given orders.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        for (int k = 0; k < y; k++) {
            int sum = 0;
            for (int q = 0; q < m; q++) {
                sum += a[i][q] * b[q][k];
            }
            c[i][k] = sum;
        }
    }

    printf("The product matrix : \n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
