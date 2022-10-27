
#include<stdio.h>

int main()

{

int i,term=15,sum1=5,sum2=11,sum,suma=0,sumb=0;

//printf("Enter term:");
//scanf("%d",&term);

for(i=1;i<=term/2;i++)

{

printf("+%d",sum1);

suma+=sum1;

sum1+=12;

printf("-%d",sum2);

sumb+=sum2;

sum2+=12;

}

if(term%2!=0)

{

printf("+%d",sum1);

suma+=sum1;

sum1=sum1+12;

}

printf(" \n");

sum=suma-sumb;

printf("SUM =%d",sum);

return 0;

}
