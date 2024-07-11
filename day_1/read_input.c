// Write a C program equivalent to this Python program:
/*
```python
print('Enter US Floor')
usf = int(input())
euf = usf - 1
print('EU Floor', euf)
```
*/

#include <stdio.h>

int main(){
    int usf, euf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d", euf);
    return 0;
}