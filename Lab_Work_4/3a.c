#include<stdio.h>

int main() {
    int i,j,rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
/*
Number of stars in K th row is equal to (N - K + 1).
In the pattern given above, N = 7.
Hence, 1st row contains 7 star, 2nd row contains 6 stars, 3rd row contains 5 stars and so on*/
    for(i = 0; i < rows; i++) {
        /* Prints one row of triangle */
        for(j = 0; j < rows - i; j++) {
            printf("* ");
        }
        /* move to next row */
        printf("\n");
    }
    return 0;
}
