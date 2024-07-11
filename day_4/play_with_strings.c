// You are to perform the following steps in a function named process(): 
// (1) Print out the string you are passed. 
// (2) Count the number of characters in the string. 
// (3) If there are more than 10 characters in the string print out the 9th character. 
// (4) Go through the string and replace every blank with a dash '-' 
// (5) Print out the new string with dashes.

#include <stdio.h>
#include <string.h>

void process(line)
    char line[];
{	
  	int i;
  	int count = 0;
  	int len = strlen(line);
  	char ninth;
  	
    printf("String: %s\n",line);
  	for (i = 0; line[i] != '\0'; i++) {
        count++;
        if (count == 10) {
          ninth = line[i];
        };
        if (line[i] == ' ') {
        	line[i] = '-';
        }; 
    };
  	printf("Count=%d\n", count);
  	if (count > 10) {
    	printf("The ninth character is: %c\n", ninth);
    };
  	printf("String: %s\n\n", line);
}

int main() {
    char line[1000];
    void process();
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
    return 0;
}
