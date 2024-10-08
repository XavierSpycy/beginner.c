// A Calculator. 
// In this program you will write a program which simulates a simple hand calculator 
// which can add, subtract, multiply, and divide floating point numbers. 
// The calculator program has a display where the answer is always displayed after each operation is done. 
// This display is called the "accumulator" (in computerese).

#include <stdio.h>

int main()
{
    char line[256];
    char opcode;
    float value, display = 0.0;

    while(fgets(line, 256, stdin) != NULL) {
        // Use sscanf to parse data from a string
        sscanf(line, "%c %f", &opcode, &value);
        if ( opcode == 'S' ) break;
		switch (opcode) {
          case '=': display = value; break;
          case '+': display += value; break;
          case '-': display -= value; break;
          case '*': display *= value; break;
          case '/': display /= value; break;
        };
        printf("Display: %.2f\n", display);
    }
}