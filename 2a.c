
#include<stdio.h>

int main() {
    int i,j,rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        /* Prints one row of triangle */
        for(j = 0; j <= i; ++j) {
           printf("* ");
        }
        /* move to next row */
        printf("\n");
    }
    return 0;
}
