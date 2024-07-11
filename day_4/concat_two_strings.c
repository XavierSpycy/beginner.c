// Write a C program to prompt for two strings and concatenate them as shown in in the Python code below. 
// Use the functions strcpy and strcat from the string.h library in your code. 
// Pre-allocate your character arrays large enought to handle up to 100 characters on input for each string 
// (i.e. do not use malloc as we have not yet covered that yet).
/*
```python
print('Enter two strings');
first = input()
second = input()
print(first + " & " + second)
```
*/

#include <stdio.h>
#include <string.h>

int main() {
  	char concat[101];
  	char str1[101], str2[101];
  	
  	printf("Enter two strings\n");
  	scanf("%s", str1);
  	scanf("%s", str2);
  	strcpy(concat, strcat(strcat(str1, " & "), str2));
  	printf("%s", concat);
}