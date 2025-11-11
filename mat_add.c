#include <stdio.h>

int user_prompt() {
    int rows, columns, row_increment, columns_increment;
    double MatrixA[100][100], MatrixB[100][100], MatrixSum[100][100];
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);
    printf("Please enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter Matrix A\n");
    for (row_increment = 0; row_increment < rows; row_increment++) {
        for (columns_increment = 0; columns_increment < columns; columns_increment++) {
            scanf("%lf", &MatrixA[row_increment][columns_increment]); }}
    printf("Enter Matrix B\n");
    for (row_increment = 0; row_increment < rows; row_increment++) {
        for (columns_increment = 0; columns_increment < columns; columns_increment++) {
            scanf("%lf", &MatrixB[row_increment][columns_increment]); }}
    printf("A + B = \n");
    for (row_increment = 0; row_increment < rows; row_increment++) {
        for (columns_increment = 0; columns_increment < columns; columns_increment++) {
            MatrixSum[row_increment][columns_increment] = MatrixA[row_increment][columns_increment] + MatrixB[row_increment][columns_increment];
            printf("%.0lf ", MatrixSum[row_increment][columns_increment]);
        }
        printf("\n");
    }
    
return 0;
}

int main() {
    user_prompt();
    return 0;
}