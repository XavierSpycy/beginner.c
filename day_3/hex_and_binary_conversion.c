// Write a function itob(n, s) 
// which converts the unsigned integer n into a binary (base 2) character representation in s. 
// Write itoh, which converts an integer to hexadecimal representation. 
// You can assume that the s variable contains enough space. 
// Make sure to properly terminate s with the end-of-string marker '\0' before returning.

// You can use reverse(s) to reverse a string 
// - make sure you pass a character array and not a string constant to reverse.

#include <stdio.h>
#include <string.h>

void itob(n, s)
int n;
char s[];
{
  	int i = 0, r;
  	void reverse();
    while (n != 0) {
    	r = n % 2;
    	n = n / 2;
      	s[i] = r + '0';
        i++;
    };
  	s[i] = '\0';
  	reverse(s);
}

void itoh(n, s)
int n;
char s[];
{	
  	int i = 0, r;
    void reverse();
    while (n != 0) {
      r = n % 16;
      n = n / 16;
      if (r >= 10) {
      	s[i] = r - 10 + 'a';
      } else {
      	s[i] = r + '0';
      };
      i++;
    };
  	s[i] = '\0';
  	reverse(s);
}

int main() {
    char s[1000];
    void itob(), itoh(), reverse();

    itob(42,s);
    printf("42 in base-2 is %s\n", s);
    itoh(42,s);
    printf("42 in base-16 is %s\n", s);

    itob(16,s);
    printf("16 in base-2 is %s\n", s);
    itoh(16,s);
    printf("16 in base-16 is %s\n", s);

    itob(59,s);
    printf("59 in base-2 is %s\n", s);
    itoh(59,s);
    printf("59 in base-16 is %s\n", s);

    itob(100,s);
    printf("100 in base-2 is %s\n", s);
    itoh(100,s);
    printf("100 in base-16 is %s\n", s);

    itob(254,s);
    printf("254 in base-2 is %s\n", s);
    itoh(254,s);
    printf("254 in base-16 is %s\n", s);
    return 0;
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}
