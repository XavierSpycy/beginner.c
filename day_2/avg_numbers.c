// This program will prompt for 5 floating point numbers. 
// The program will print out the total of the five numbers and also print out the average.

#include <stdio.h>

int main () {
  int n = 0;
  double input, sum = 0.0, avg;
  while (scanf("%lf", &input) != EOF) {
  	sum += input;
    n += 1;
  }
  avg = sum / n;
  printf("The total is: %.1f\n", sum);
  printf("The average is: %.1f\n", avg);
  return 0;
}