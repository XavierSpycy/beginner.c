// Count blanks and new lines. We skip tabs because it is a little tricky.

#include <stdio.h>

int main(){
    int c, nl = 0, space = 0;
  
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
  		if (c == ' '){
          	 space++;
        }
    }
    printf("%d %d\n", space, nl);
    
    return 0;
}