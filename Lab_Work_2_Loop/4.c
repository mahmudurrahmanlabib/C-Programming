#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,f=0,s=1;
    n=f+s;
    printf("%d\t%d\t%d",f,s,n);
    start:
        for (i=1;i<=50;i++)
        {
            f=s;
            s=n;
            n=f+s;
            if (n<300)
            {
                printf("\t%d",n);
                goto start;
            }
            else goto last;
        }
        last:
            getch();
            return 0;
}
