// Write a program which prints the words in its input, one per line. 
// A word is any string separated by a space or newline.

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
      	if (c == 32){
        	printf("\n");
        } else {
        	putchar(c);
        };
    };
  	return 0;
}