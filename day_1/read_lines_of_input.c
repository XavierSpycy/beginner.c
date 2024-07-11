// Write a C program equivalent to this Python program:
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
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
    return 0;
}