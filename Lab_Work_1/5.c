#include <stdio.h>
#include <ctype.h>
main()
{
  char x;
  printf("Enter an alphabet :");
  x = getchar(); // read a character from keyboard
  if (islower(x))
     putchar(toupper(x)); //change to uppercase
  else
     putchar(tolower(x)); //else change to lowercase
     return 0;
}
