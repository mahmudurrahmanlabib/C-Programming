#include <stdio.h>
void main()
{
   int i,n,sum=0,avg=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
     avg = sum/n;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
      printf("\nThe Avg of odd Natural Number upto %d terms : %d \n",n,avg);
}
