// Modify the temperature conversion program to print a heading above the table. 
// Check the sample output for the required format of the heading.

#include <stdio.h>

int main(){
    int fahr;
  	printf("FAHR   CELSIUS\n");
  	printf("===============\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 40){
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}