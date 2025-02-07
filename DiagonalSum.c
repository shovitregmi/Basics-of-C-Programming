#include <stdio.h>

int main() {
    int mat[10][10], i, j, n, sum = 0;

    printf("Enter the size of the matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                sum += mat[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements is: %d", sum);

    return 0;
}
