
#include<stdio.h>

int main()
{
        int n,sum,sum1=0,i,j;

        
        /* For The Pattern The Formula Would Be [{n(n+1)(n+2)}/6] */
        printf("\nEnter value for n = ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
    {
                sum=0;
                for(j=1;j<=i;j++)
                {
                    sum=sum+j;
                }
                sum1=sum1+sum;
        }

        printf("\nThe Sum of Series up to Value [ %d ] = [ %d ]\n",n,sum1);

        return 0;
}
