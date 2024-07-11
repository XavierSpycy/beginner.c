// You should write a function (no #include statements are needed) 
// called lower(c) that converts its input parameter to lower case. 
// If the letter is not an upper case ASCII letter - just return the parameter unchanged. 
// You should not use ctype.h and your code can assume the ASCII character set. 
// You should use the question mark (?) operator and not an if-then-else construct.

// Each time you run the program, the values you need to convert may be different. 
// The main program will be provided.

#include <stdio.h>

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower K is %c\n", lower('K'));
  return 0;
}