#include<stdio.h>

int main()

{

  int a, b, res;
  char c;
  printf ("Enter any one operator +, -, *, / \n");
  scanf("%c", &c);
  printf ("\n Enter two numbers\n [Press Enter After Every Number] \n");
  scanf ("\n %d \n %d",&a, &b);

  if (c=='+')
  {
    res=a+b;
    printf("\n The sum is %d",res);
  }

  else if(c== '-')
  {
    res=a-b;
    printf("\n The difference is %d",res);
  }

  else if(c== '*')
  {
    res=a*b;
    printf("\n The product is %d",res);
  }

  else if(c=='/')
  {
    res=a/b;
    printf("\n The quotient is %d",res);
  }

  else
  {
    printf ("\n Invalid entry");
  }

  return 0;

}
