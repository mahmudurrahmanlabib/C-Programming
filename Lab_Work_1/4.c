#include<stdio.h>
int main()
{
    int mark;
    printf("Enter a Mark:");
    scanf("%d", &mark);
    if(mark>= 95) printf("A+");
    if(mark>= 85 && mark<95) printf("A");
    if(mark>= 80 && mark<85) printf("A-");
    if(mark>= 75 && mark<80) printf("B+");
    if(mark>= 70 && mark<75) printf("B");
    if(mark>= 65 && mark<70) printf("B-");
    if(mark>= 60 && mark<65) printf("C+");
    if(mark>= 55 && mark<60) printf("C");
    if(mark>= 50 && mark<55) printf("D");
    if(mark< 50) printf("Fail");
    return 0;
}
