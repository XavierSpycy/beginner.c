// Write a C program to produce the same output as this Python program using the %d and %s features of the printf() function:
/*
```python
print('Hello world')
print('Answer', 18)
print('Name', 'Sarah')
```
*/

#include <stdio.h>

int main(){
    printf("Hello world\n");
    printf("Answer %d\n", 18);
    printf("Name %s\n", "Sarah");
    return 0;
}