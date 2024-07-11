// Write a C program equivalent to this Python program:
/*
```python
print('Enter name')
name = input()
print('Hello', name)
```
*/

#include <stdio.h>

int main(){
    char name[31];
    printf("Enter name\n");
    scanf("%30s", name);
    printf("Hello %s\n", name);
    return 0;
}