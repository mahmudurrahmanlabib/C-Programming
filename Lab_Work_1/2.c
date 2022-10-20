#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    while (scanf("%d", &n))
        if ((n%5==0||n%7==0&&n%11!=0))
            printf("Number Passes Test\n");
        else
            printf("Number Fails Test\n");
    return 0;
}
