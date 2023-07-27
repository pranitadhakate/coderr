
//A7
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

bool isIdentityMatrix(int mat[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                // Check if the diagonal elements are 1.
                if (mat[i][j] != 1) {
                    return false;
                }
            } else {
                // Check if non-diagonal elements are 0.
                if (mat[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Size should be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isIdentityMatrix(matrix, size)) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is NOT an identity matrix.\n");
    }

    return 0;
}
//4
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1 (not)


/*#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

bool isDiagonalMatrix(int mat[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && mat[i][j] != 0) {
                return false;
            } else if (i == j && mat[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Size should be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isDiagonalMatrix(matrix, size)) {
        printf("The given matrix is a diagonal matrix.\n");
    } else {
        printf("The given matrix is NOT a diagonal matrix.\n");
    }

    return 0;
}
//3
///1 0 0 
//0 2 0
//0 0 3(dia)
//2
//1 2
//3 0
*/
