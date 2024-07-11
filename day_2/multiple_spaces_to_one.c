// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main() {
  int c;
  int space_flag = 0;
  while ((c = getchar()) != EOF) {
      if (c != 32) {
        putchar(c);
        if (space_flag == 1) {
          space_flag = 0;
        };
      } else if (space_flag == 0) {
        putchar(c);
        space_flag = 1;
      } else {
        continue;
      };
  };
  return 0;
}