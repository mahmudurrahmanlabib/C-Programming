/*take one input number find out
 sum of digits and maximum digit*/

#include<stdio.h>
int i,n,r,max,sum=0;
int main()
{
    printf("Enter Numbers:");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}
