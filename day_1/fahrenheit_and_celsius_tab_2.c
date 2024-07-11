// Write a program to print the corresponding Celsius to Fahrenheit table. 
// Check the sample output for the required format of the heading.

#include <stdio.h>

int main(){
    int cel;
    for (cel = 0; cel <= 100; cel = cel + 20){
        printf("%4d %6.1f\n", cel, (cel * 1.8 + 32.0));
    }
  	return 0;
}