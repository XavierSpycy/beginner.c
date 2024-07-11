// Write a C program to implement this Python program, using the fgets function instead of scanf.
/*
```python
print('Enter line')
line = input()
print('Line:', line)
```
*/

#include <stdio.h>

int main(){
    char line[1001];
    printf("Enter line\n");
    if (fgets(line, sizeof(line), stdin) != NULL){
        printf("Line: %s\n", line);
    };
    return 0;
}