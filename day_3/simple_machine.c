// You are to implement an interpreter for a simple programming language. 
// Your computer has 256 characters of memory. 
// You are to read a sequence of instructions from input and perform those instructions. 
// At the end of the program you print the memory out as a zero-terminated C character array. 
// Here are the instructions you need to support:
// *           This is a comment, print it out and do no further processing
// X           Exit the program (end-of-input also ends the program)
// 5 = 42      Put the number 42 into memory[5]
// 10 + 3      Add 3 to the contents of memory[10]
// 7 - 1       Suptract 1 from the contents of memory[7]

#include <stdio.h>

int main()
{
    char line[256];
    char memory[256];
    char opcode;
    int count,address,value;

    while(fgets(line, 256, stdin) != NULL) {
        // printf("\nLine: %s\n",line);
        if ( line[0] == 'X' ) break;
        if ( line[0] == '*' ) {
            // printf("%s\n",line);
            continue;
        };
        count = sscanf(line, "%d %c %d", &address, &opcode, &value);
        if ( count != 3 ) continue;
        // printf("address: %d opcode: %c value: %d\n", address, opcode, value);

        switch (opcode) {
        	case '=': memory[address] = value; break;
          	case '+': memory[address] += value; break;
          	case '-': memory[address] -= value; break;
        }

        // printf("Memory:\n%s\n", memory);
    };
    printf("Memory:\n%s\n", memory);
  	return 0;
}