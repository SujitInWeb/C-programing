#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3];
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns for Matrix 1.\n");
    printf("Enter no. of rows : ");
    scanf("%d", &row1);
    printf("Enter no. of columns : ");
    scanf("%d", &col1);

    printf("Enter the number of rows and columns for Matrix 2.\n");
    printf("Enter no. of rows : ");
    scanf("%d", &row2);
    printf("Enter no. of columns : ");
    scanf("%d", &col2);

    if (row1 == row2 && col1 == col2) {
        printf("For Matrix 1 : \n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("Enter element for [%d][%d] : ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("For Matrix 2 : \n");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                printf("Enter element for [%d][%d] : ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        int matrix_sum[row1][col1], matrix_diff[row1][col1];

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("Addition of Matrix1 & Matrix2 :\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("%d ", matrix_sum[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                matrix_diff[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
        printf("Subtraction of Matrix1 & Matrix2 :\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("%d ", matrix_diff[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}