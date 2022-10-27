#include <stdio.h>

int main(void) {

   int num, pow, result = 1, count = 1;

   printf("Enter a number \n");
   scanf("%d", &num);

   printf("Enter the power of a number\n");
   scanf("%d", &pow);

   while(count <= pow) {

     result = result * num;
     count++;
   }

   printf("Result = %d", result);

   return 0;
}
