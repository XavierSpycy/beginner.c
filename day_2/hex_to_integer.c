// You should write a function (no #include statements are needed) 
// called htoi(str) that converts hexadecimal constant (base-16 0-9 and a-f) to an integer. 
// There will not be a '0x' prefix (like in C) - just assume the input is a hex number. 
// You should not use ctype.h and your code can assume the ASCII character set.

// Each time you run the program, 
// the values you need to convert da65e (base-16) to 894558 (base-10) may be different each time you run the code.

#include <stdio.h>

int htoi(s)
char s[];
{
	int i, n = 0;
  	int len = strlen(s);
  	for (i = 0; i < len; ++i) {
    	if (s[i] >= '0' && s[i] <= '9') {
        	n = 16 * n + s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
        	n = 16 * n + s[i] - 'a' + 10;
        } else {
        	n = 16 * n + s[i] - 'A' + 10;
        };
    };
  return n;
}

int main() {
  int htoi();
  printf("htoi('8c45e') = %d\n", htoi("8c45e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}