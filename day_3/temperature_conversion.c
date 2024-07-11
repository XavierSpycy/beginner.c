// You should write a function 
// called faren(cel) that takes as input a double Celsius temperature 
// and converts it and returns the equivalent Fahrenheit value.

#include <stdio.h>

double faren(celsius)
double celsius;
{
    return celsius * 1.8 + 32;
}

int main() {
    double faren();
    printf("faren(42) is %.1f\n", faren(42.0));
    printf("faren(0) is %.1f\n", faren(0.0));
    printf("faren(-10) is %.1f\n", faren(-10.0));
    printf("faren(32) is %.1f\n", faren(32.0));
    printf("faren(100) is %.1f\n", faren(100.0));
    printf("faren(212) is %.1f\n", faren(212.0));
    return 0;
}